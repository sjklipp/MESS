

#ifndef POTENTIAL_HH
#define POTENTIAL_HH

#include "dynamic.hh"
#include "io.hh"
#include "system.hh"

namespace Potential {

  // potential types
  enum {
    ANALYTIC,      // Analytic 
    CL,            // Charge - linear molecule multipole potential
    CN,            // Charge - non-linear molecule multipole potential
    DD,            // Dipole -dipole multipole potential
    MULTIPOLE,     // General long-range multipole potential
    HARMONIC       // harmonic expansion
  };

  // abstract class base for potential objects
  class Base { 
      
  public:

    virtual double operator() (const Dynamic::Coordinates&, D3::Vector* force) const =0;
    virtual int    type       ()                                               const =0;

    virtual ~Base () {}
  };

  // potential object wrapper
  class Wrap : public IO::Read 
  {
    ConstSharedPointer<Base> _fun;
	
  public:
    Wrap () {}
    Wrap (ConstSharedPointer<Base> pf) : _fun(pf) {}
    ~Wrap () {}

    void read (std::istream&) throw(Error::General);

    operator  bool () const { return  _fun; }
    bool operator! () const { return !_fun; }

    void   isinit () const throw(Error::General);

    double operator() (const Dynamic::Coordinates&, D3::Vector* =0) const throw(Error::General);
    int    type       ()                                            const throw(Error::General);
  };

  inline void Wrap::isinit () const throw(Error::General)
  {
    const char funame [] = "Potential::wrap::isinit: ";

    if(!_fun) {
      std::cerr << funame << "not initialized\n";
      throw Error::Init();
    }
  }

  inline double Wrap::operator() (const Dynamic::Coordinates& dc, D3::Vector* force) const throw(Error::General)
  {
    isinit();
    return (*_fun)(dc, force);
  }

  inline int Wrap::type () const throw(Error::General)
  {
    isinit();
    return _fun->type();
  }

  // Low potential energy condition
  class Condition : public Dynamic::Condition 
  {
    Potential::Wrap _pot;
    double _emin;

  public:
    Condition (Potential::Wrap pot, double e) throw(Error::General);
    bool test (const Dynamic::Coordinates&) const;

    ~Condition () {}
  };

  inline Condition::Condition (Potential::Wrap pot, double e) throw(Error::General)
    : _pot(pot), _emin(e)
  {
    const char funame [] = "Potential::Condition::Condition: ";

    if(!_pot) {
      std::cerr << funame << "potential not initialized\n";
      throw Error::Init();
    }
  }

  inline bool Condition::test (const Dynamic::Coordinates& dc) const
  {
    if(_pot(dc) < _emin)
      return true;
    else
      return false;
  }

  /*
  // harmonic expansion
  class Harmonic : public Base
  {
    EnergyConverter                       _convert;
    ConstSharedPointer<HarmonicExpansion> _harmonic_expansion [2];
    std::vector<Slatec::Spline>           _expansion_coefficient;

    double _dist_incr, _angl_incr;

  public:
    Harmonic (std::istream&) throw(Error::General);

    double operator() (const Dynamic::Coordinates&, D3::Vector*) const throw(Error::General);
    int type () const { return HARMONIC; }
  };
*/
  // Analytic potential
  extern "C" {
    typedef double (*ener_t) (const double* coord, const double* rpar, const int* ipar, int& ifail);
    typedef void   (*init_t) (const char* data_file_name);
  }

  class Analytic : public Base
  {
    System::DynLib  _pot_libr;
    ener_t          _pot_ener;
    init_t          _pot_init;
    Array<double>   _pot_rpar;
    Array<int>      _pot_ipar;

    System::DynLib _corr_libr;
    ener_t         _corr_ener;
    init_t         _corr_init;
    Array<double>  _corr_rpar;
    Array<int>     _corr_ipar;

    double _dist_incr, _angl_incr; // cartesian & angular increments for numerical differentiation

    static void _dc2cart (const Dynamic::Coordinates&, Array_2<double>&); // convert dc (my) to cartesian

    double _tot_ener (const double* coord) const throw(Error::General);

    // no copies
    Analytic (const Analytic&);
    Analytic& operator= (const Analytic&);
    
  public:
    Analytic (std::istream&) throw(Error::General);
    ~Analytic () {}

    double operator() (const Dynamic::Coordinates&, D3::Vector*) const throw(Error::General);
    int type () const { return ANALYTIC; }
  };

  // Multipole potential for a charge(1) and a linear(2) molecule
  class ChargeLinear : public Base
  {
    double                     _charge;
    double                     _dipole;
    double                 _quadrupole;  // occording to Landau & Lifshitz definition
    double   _isotropic_polarizability;
    double _anisotropic_polarizability;

    enum _mode_t {POT_VALUE, DIST_DERIV, ANGLE_DERIV};
    double _pot (double dist, double cos_theta, _mode_t mode) const throw(Error::General);

    ChargeLinear (const ChargeLinear&); // no copies
    ChargeLinear& operator= (const ChargeLinear&);

  public:
    ChargeLinear (std::istream&) throw(Error::General);
    ~ChargeLinear () {}

    double operator() (const Dynamic::Coordinates&, D3::Vector*) const throw(Error::General);
    int type () const { return CL; }
  };

  // Multipole potential for a charge(1) and a nonlinear(2) molecule
  class ChargeNonlinear : public Base
  {
    double             _charge;
    D3::Vector         _dipole; // dx, dy, dz
    D3::Matrix     _quadrupole; // qxx, qxy, qxz, qyy, qyz
    D3::Matrix _polarizability; // pxx, pxy, pxz, pyy, pyz, pzz

    ChargeNonlinear (const ChargeNonlinear&); // no copies
    ChargeNonlinear& operator= (const ChargeNonlinear&);

  public:
    ChargeNonlinear (std::istream&) throw(Error::General);
    ~ChargeNonlinear () {}

    double operator() (const Dynamic::Coordinates&, D3::Vector*) const throw(Error::General);
    int type () const { return CN; }
  };


  // Dipole-dipole potential
  class DipoleDipole : public Base
  {
    D3::Vector _dipole [2];
    double _polarizability [2] ; // isotropic polarizability is assumed
    double _dispersion;  // dispersion interaction

    DipoleDipole (const DipoleDipole&); // no copies
    DipoleDipole& operator= (const DipoleDipole&);

  public:
    DipoleDipole (std::istream&) throw(Error::General);
    ~DipoleDipole () {}

    double operator() (const Dynamic::Coordinates& dc, D3::Vector*) const throw(Error::General);
    int type () const { return DD; }
  };


  // Multipole potential
  class Multipole : public Base
  {
    double _dispersion;  // dispersion interaction

    Multipole (const Multipole&); // no copies
    Multipole& operator= (const Multipole&);

  public:
    Multipole (std::istream&) throw(Error::General);
    ~Multipole () {}

    double operator() (const Dynamic::Coordinates& dc, D3::Vector*) const throw(Error::General);
    int type () const { return MULTIPOLE; }
  };

}// Potential namespace

extern Potential::Wrap default_pot;

#endif

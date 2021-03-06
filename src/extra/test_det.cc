#include "lapack.hh"
#include "d3.hh"

#include <cstdlib>
#include <ctime>

int main ()
{
  // random number initialization
  srand48(std::time(0));

  int n = 3;
  Lapack::Matrix m(n, n);

  for(int i = 0; i < n; ++i)
    for(int j = 0; j < n; ++j)
      m(i, j) = drand48();

  std::cout << "the initial matrix is:\n\n";
    for(int i = 0; i < n; ++i) {
      for(int j = 0; j < n; ++j)
	std::cout << std::setw(10) << m(i, j);
      std::cout << "\n";
    }
  std::cout << "\n";

  Lapack::LU lu(m);

  double d1 = lu.det();

  double d2 = D3::volume(D3::Vector(&m(0, 0)), D3::Vector(&m(0, 1)),D3::Vector(&m(0, 2)));

  std::cout << "Determinant via LU-factorization = " << d1 
	    << "\nDeterminant via direct calculation = " 
	    << d2 << "\n";

  Lapack::SymmetricMatrix sym(3);
  sym = 3.;
  std::cout << "Determinant of the 3-d diagonal matrix with  the diagonal 3 via cholesky factorization = "
	    << Lapack::Cholesky(sym).det_sqrt() << "\n";
  return 0;
}

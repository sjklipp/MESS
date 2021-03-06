#include "lapack.hh"
#include "d3.hh"

#include <cstdlib>
#include <ctime>

int main ()
{
  // random number initialization
  srand48(std::time(0));

  int n = 3;
  Lapack::SymmetricMatrix m(n);

  for(int i = 0; i < n; ++i)
    for(int j = i; j < n; ++j)
      m(i, j) = drand48();

  std::cout << "the initial matrix is:\n\n";
    for(int i = 0; i < n; ++i) {
      for(int j = 0; j < n; ++j)
	std::cout << std::setw(10) << m(i, j);
      std::cout << "\n";
    }
  std::cout << "\n";

  Lapack::Matrix evec(n, n);
  Lapack::Vector eval = m.eigenvalues(&evec);

  std::cout << "eigenvalues: ";
  for(int i = 0; i < n; ++i)
      std::cout << std::setw(11) << eval[i];
  std::cout << "\n\n";


  std::cout << "Transformation determinant by LU-factorization   = " 
	    << Lapack::LU(evec).det() << "\n"
	    << "Transformation determinant through vector product = "
	    <<  D3::volume(D3::Vector(&evec(0, 0)), D3::Vector(&evec(0, 1)),D3::Vector(&evec(0, 2)))
	    << "\n";

  return 0;
}

#include "lapack.hh"
#include "d3.hh"

#include <cstdlib>
#include <ctime>

int main ()
{
  // random number initialization
  srand48(std::time(0));

  int n;
  std::cout << "dimension: ";
  std::cin >> n;
  Lapack::Matrix m(n);

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

  Lapack::Matrix l = lu.copy();
  Lapack::Matrix u = lu.copy();

  for(int i = 0; i < n; ++i)
    for(int j = 0; j < n; ++j)
      if (i > j) 
	u(i, j) = 0.;
      else if (i < j)
	l(i, j) = 0.;
      else
	l(i, j) = 1.;

  RefArr<Lapack::int_t> ipiv = lu.ipiv();

  std::cout << "ipiv vector: ";
  for(int i = 0; i < ipiv.size(); ++i) {
    std::cout << std::setw(3) << --(ipiv[i]);
  }
  std::cout << "\n\n";

  RefArr<Lapack::int_t> ppp(n);
  
  for(int i = 0; i < n; ++i)
      ppp[i] = i;

  for(int i = 0; i < n; ++i)
      std::swap(ppp[i], ppp[ipiv[i]]);

  std::cout << "ppp vector: ";
  for(int i = 0; i < ipiv.size(); ++i)
    std::cout << std::setw(3) << ppp[i];
  std::cout << "\n\n";

  Lapack::Matrix perm(n, n);
  perm = 0.;
  for(int i = 0; i < n; ++i)
    perm(ppp[i], i) = 1.;

  Lapack::Matrix res = perm * l * u;
  std::cout << "the final matrix is:\n\n";
    for(int i = 0; i < n; ++i) {
      for(int j = 0; j < n; ++j)
	std::cout << std::setw(10) << res(i, j);
      std::cout << "\n";
    }
  std::cout << "\n";

  return 0;
}

// Get inverse of Matrix A via Rgetri, using quad-double
// This file is freely usable.
// written by Nakata Maho, 2009/9/23.

#include <mblas_qd.h>
#include <mlapack_qd.h>
#include <stdio.h>

//Matlab/Octave format
void printmat(int N, int M, qd_real * A, int LDA)
{
    qd_real mtmp;

    printf("[ ");
    for (int i = 0; i < N; i++) {
	printf("[ ");
	for (int j = 0; j < M; j++) {
	    mtmp = A[i + j * LDA];
	    std::cout << mtmp;
	    if (j < M - 1)
		printf(", ");
	}
	if (i < N - 1)
	    printf("]; ");
	else
	    printf("] ");
    }
    printf("]");
}

int main()
{
    mpackint n = 3;
    mpackint lwork, info;

    qd_real *A = new qd_real[n * n];
    mpackint *ipiv = new mpackint[n];

//setting A matrix
    A[0 + 0 * n] = 1;    A[0 + 1 * n] = 4;    A[0 + 2 * n] = 6;
    A[1 + 0 * n] = 2;    A[1 + 1 * n] = 9;    A[1 + 2 * n] = 14;
    A[2 + 0 * n] = 3;    A[2 + 1 * n] = 14;   A[2 + 2 * n] = 23;

    printf("A = ");
    printmat(n, n, A, n);
    printf("\n");
//work space query
    lwork = -1;
    qd_real *work = new qd_real[1];

    Rgetri(n, A, n, ipiv, work, lwork, &info);
    lwork = int (work[0].x[0]);
    delete[]work;
    work = new qd_real[std::max(1, (int) lwork)];
//inverse matrix
    Rgetrf(n, n, A, n, ipiv, &info);
    Rgetri(n, A, n, ipiv, work, lwork, &info);

    printf("invA = ");
    printmat(n, n, A, n);
    printf("\n");
    delete[]work;
    delete[]ipiv;
    delete[]A;
}

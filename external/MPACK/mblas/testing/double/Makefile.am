#CTBSV, CTPSV might have bugs or intrinsically inaccurate
#Rnrm2 should be checked more
check_PROGRAMS = $(mblas_double_test_PROGRAMS) 
TESTS = $(check_PROGRAMS)
mblas_double_test_PROGRAMS = \
complex.debug_double \
iCamax.debug.double_ref iCamax.debug.double   \
iRamax.debug.double_ref iRamax.debug.double   \
Mlsame.debug.double_ref Mlsame.debug.double   \
Mxerbla.debug.double_ref Mxerbla.debug.double \
CRrot.debug.double_ref  CRrot.debug.double    \
CRscal.debug.double_ref CRscal.debug.double   \
Caxpy.debug.double_ref  Caxpy.debug.double    \
Ccopy.debug.double_ref  Ccopy.debug.double    \
Cdotc.debug.double_ref  Cdotc.debug.double	\
Cdotu.debug.double_ref  Cdotu.debug.double	\
Cgbmv.debug.double_ref  Cgbmv.debug.double	\
Cgemm.debug.double_ref  Cgemm.debug.double	\
Cgemv.debug.double_ref  Cgemv.debug.double	\
Cgerc.debug.double_ref  Cgerc.debug.double	\
Cgeru.debug.double_ref  Cgeru.debug.double    \
Chbmv.debug.double_ref  Chbmv.debug.double	\
Chemm.debug.double_ref  Chemm.debug.double	\
Chemv.debug.double_ref  Chemv.debug.double	\
Cher.debug.double_ref   Cher.debug.double 	\
Cher2.debug.double_ref  Cher2.debug.double	\
Cher2k.debug.double_ref Cher2k.debug.double	\
Cherk.debug.double_ref  Cherk.debug.double	\
Chpmv.debug.double_ref  Chpmv.debug.double	\
Chpr.debug.double_ref   Chpr.debug.double	\
Chpr2.debug.double_ref  Chpr2.debug.double	\
Crotg.debug.double_ref  Crotg.debug.double	\
Cscal.debug.double_ref  Cscal.debug.double	\
Cswap.debug.double_ref  Cswap.debug.double	\
Csymm.debug.double_ref  Csymm.debug.double    \
Csyr2k.debug.double_ref Csyr2k.debug.double	\
Csyrk.debug.double_ref  Csyrk.debug.double	\
Ctbmv.debug.double_ref  Ctbmv.debug.double	\
Ctbsv.debug.double_ref  Ctbsv.debug.double	\
Ctpmv.debug.double_ref  Ctpmv.debug.double	\
Ctpsv.debug.double_ref  Ctpsv.debug.double	\
Ctrmm.debug.double_ref  Ctrmm.debug.double	\
Ctrmv.debug.double_ref  Ctrmv.debug.double	\
Ctrsm.debug.double_ref  Ctrsm.debug.double	\
Ctrsv.debug.double_ref  Ctrsv.debug.double	\
RCabs1.debug.double_ref RCabs1.debug.double	\
RCasum.debug.double_ref RCasum.debug.double	\
RCnrm2.debug.double_ref RCnrm2.debug.double	\
Rasum.debug.double_ref  Rasum.debug.double    \
Raxpy.debug.double_ref  Raxpy.debug.double	\
Rcopy.debug.double_ref  Rcopy.debug.double	\
Rdot.debug.double_ref   Rdot.debug.double	\
Rgbmv.debug.double_ref  Rgbmv.debug.double	\
Rgemm.debug.double_ref  Rgemm.debug.double	\
Rgemv.debug.double_ref  Rgemv.debug.double	\
Rger.debug.double_ref   Rger.debug.double	\
Rnrm2.debug.double_ref  Rnrm2.debug.double	\
Rrot.debug.double_ref   Rrot.debug.double	\
Rrotg.debug.double_ref  Rrotg.debug.double	\
Rrotm.debug.double_ref  Rrotm.debug.double	\
Rsbmv.debug.double_ref  Rsbmv.debug.double	\
Rscal.debug.double_ref  Rscal.debug.double	\
Rspmv.debug.double_ref  Rspmv.debug.double    \
Rspr.debug.double_ref   Rspr.debug.double	\
Rspr2.debug.double_ref  Rspr2.debug.double	\
Rswap.debug.double_ref  Rswap.debug.double	\
Rsymm.debug.double_ref  Rsymm.debug.double	\
Rsymv.debug.double_ref  Rsymv.debug.double	\
Rsyr.debug.double_ref   Rsyr.debug.double	\
Rsyr2.debug.double_ref  Rsyr2.debug.double	\
Rsyr2k.debug.double_ref Rsyr2k.debug.double	\
Rsyrk.debug.double_ref  Rsyrk.debug.double	\
Rtbmv.debug.double_ref  Rtbmv.debug.double	\
Rtbsv.debug.double_ref  Rtbsv.debug.double	\
Rtpmv.debug.double_ref  Rtpmv.debug.double	\
Rtpsv.debug.double_ref  Rtpsv.debug.double	\
Rtrmm.debug.double_ref  Rtrmm.debug.double    \
Rtrmv.debug.double_ref  Rtrmv.debug.double	\
Rtrsm.debug.double_ref  Rtrsm.debug.double	\
Rtrsv.debug.double_ref  Rtrsv.debug.double

mblas_double_testdir = $(prefix)/share/mpack/testing/double
ref_libdepends = -L$(top_builddir)/mblas/reference -lmblas_double_ref -lmblas_mpfr_ref
opt_libdepends = -L$(top_builddir)/mblas/optimized/double -lmblas_double -L$(top_builddir)/mblas/reference -lmblas_mpfr_ref
mplibs=-L$(top_srcdir)/$(MPC_LIBDIR) -L$(top_srcdir)/$(MPFR_LIBDIR) -L$(top_srcdir)/$(GMP_LIBDIR) -L$(top_builddir)/mpfrc++ -lmpfrcxx -lmpc -lmpfr -lgmpxx -lgmp 
blas_libs=$(BLAS_LIBS) $(FLIBS) 

debug_srcdepends = ../common/xerbla.cpp ../common/mpack.debug.cpp
debug_cxxflags = $(OPENMP_CXXFLAGS) -I$(top_srcdir)/include -I$(top_srcdir)/$(GMP_INCLUDEDIR) -I$(top_srcdir)/$(MPFR_INCLUDEDIR) -I$(top_srcdir)/$(MPC_INCLUDEDIR) -I$(top_srcdir)/mpfrc++ -D___MPACK_BUILD_WITH_DOUBLE___ -DVERBOSE_TEST

##
complex_debug_double_SOURCES=../common/complex.debug.cpp $(debug_srcdepends)
complex_debug_double_CXXFLAGS=$(debug_cxxflags)
complex_debug_double_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

iCamax_debug_double_ref_SOURCES=../common/iCamax.debug.cpp $(debug_srcdepends)
iCamax_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
iCamax_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

iCamax_debug_double_SOURCES=../common/iCamax.debug.cpp $(debug_srcdepends)
iCamax_debug_double_CXXFLAGS=$(debug_cxxflags)
iCamax_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

iRamax_debug_double_ref_SOURCES=../common/iRamax.debug.cpp $(debug_srcdepends)
iRamax_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
iRamax_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

iRamax_debug_double_SOURCES=../common/iRamax.debug.cpp $(debug_srcdepends)
iRamax_debug_double_CXXFLAGS=$(debug_cxxflags)
iRamax_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Mlsame_debug_double_ref_SOURCES=../common/Mlsame.debug.cpp $(debug_srcdepends)
Mlsame_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Mlsame_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Mlsame_debug_double_SOURCES=../common/Mlsame.debug.cpp $(debug_srcdepends)
Mlsame_debug_double_CXXFLAGS=$(debug_cxxflags)
Mlsame_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Mxerbla_debug_double_ref_SOURCES=../common/Mxerbla.debug.cpp $(debug_srcdepends)
Mxerbla_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Mxerbla_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Mxerbla_debug_double_SOURCES=../common/Mxerbla.debug.cpp $(debug_srcdepends)
Mxerbla_debug_double_CXXFLAGS=$(debug_cxxflags)
Mxerbla_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

CRrot_debug_double_ref_SOURCES=../common/CRrot.debug.cpp $(debug_srcdepends)
CRrot_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
CRrot_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

CRrot_debug_double_SOURCES=../common/CRrot.debug.cpp $(debug_srcdepends)
CRrot_debug_double_CXXFLAGS=$(debug_cxxflags)
CRrot_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

CRscal_debug_double_ref_SOURCES=../common/CRscal.debug.cpp $(debug_srcdepends)
CRscal_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
CRscal_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

CRscal_debug_double_SOURCES=../common/CRscal.debug.cpp $(debug_srcdepends)
CRscal_debug_double_CXXFLAGS=$(debug_cxxflags)
CRscal_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Caxpy_debug_double_SOURCES=../common/Caxpy.debug.cpp $(debug_srcdepends)
Caxpy_debug_double_CXXFLAGS=$(debug_cxxflags)
Caxpy_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Caxpy_debug_double_ref_SOURCES=../common/Caxpy.debug.cpp $(debug_srcdepends)
Caxpy_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Caxpy_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Ccopy_debug_double_SOURCES=../common/Ccopy.debug.cpp $(debug_srcdepends)
Ccopy_debug_double_CXXFLAGS=$(debug_cxxflags)
Ccopy_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Ccopy_debug_double_ref_SOURCES=../common/Ccopy.debug.cpp $(debug_srcdepends)
Ccopy_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Ccopy_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Cdotc_debug_double_SOURCES=../common/Cdotc.debug.cpp $(debug_srcdepends)
Cdotc_debug_double_CXXFLAGS=$(debug_cxxflags)
Cdotc_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Cdotc_debug_double_ref_SOURCES=../common/Cdotc.debug.cpp $(debug_srcdepends)
Cdotc_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Cdotc_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Cdotu_debug_double_SOURCES=../common/Cdotu.debug.cpp $(debug_srcdepends)
Cdotu_debug_double_CXXFLAGS=$(debug_cxxflags)
Cdotu_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Cdotu_debug_double_ref_SOURCES=../common/Cdotu.debug.cpp $(debug_srcdepends)
Cdotu_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Cdotu_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Cgbmv_debug_double_SOURCES=../common/Cgbmv.debug.cpp $(debug_srcdepends)
Cgbmv_debug_double_CXXFLAGS=$(debug_cxxflags)
Cgbmv_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Cgbmv_debug_double_ref_SOURCES=../common/Cgbmv.debug.cpp $(debug_srcdepends)
Cgbmv_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Cgbmv_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Cgemm_debug_double_SOURCES=../common/Cgemm.debug.cpp $(debug_srcdepends)
Cgemm_debug_double_CXXFLAGS=$(debug_cxxflags)
Cgemm_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Cgemm_debug_double_ref_SOURCES=../common/Cgemm.debug.cpp $(debug_srcdepends)
Cgemm_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Cgemm_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Cgemv_debug_double_SOURCES=../common/Cgemv.debug.cpp $(debug_srcdepends)
Cgemv_debug_double_CXXFLAGS=$(debug_cxxflags)
Cgemv_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Cgemv_debug_double_ref_SOURCES=../common/Cgemv.debug.cpp $(debug_srcdepends)
Cgemv_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Cgemv_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Cgerc_debug_double_SOURCES=../common/Cgerc.debug.cpp $(debug_srcdepends)
Cgerc_debug_double_CXXFLAGS=$(debug_cxxflags)
Cgerc_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Cgerc_debug_double_ref_SOURCES=../common/Cgerc.debug.cpp $(debug_srcdepends)
Cgerc_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Cgerc_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Cgeru_debug_double_SOURCES=../common/Cgeru.debug.cpp $(debug_srcdepends)
Cgeru_debug_double_CXXFLAGS=$(debug_cxxflags)
Cgeru_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Cgeru_debug_double_ref_SOURCES=../common/Cgeru.debug.cpp $(debug_srcdepends)
Cgeru_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Cgeru_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Chbmv_debug_double_SOURCES=../common/Chbmv.debug.cpp $(debug_srcdepends)
Chbmv_debug_double_CXXFLAGS=$(debug_cxxflags)
Chbmv_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Chbmv_debug_double_ref_SOURCES=../common/Chbmv.debug.cpp $(debug_srcdepends)
Chbmv_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Chbmv_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Chemm_debug_double_SOURCES=../common/Chemm.debug.cpp $(debug_srcdepends)
Chemm_debug_double_CXXFLAGS=$(debug_cxxflags)
Chemm_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Chemm_debug_double_ref_SOURCES=../common/Chemm.debug.cpp $(debug_srcdepends)
Chemm_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Chemm_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Chemv_debug_double_SOURCES=../common/Chemv.debug.cpp $(debug_srcdepends)
Chemv_debug_double_CXXFLAGS=$(debug_cxxflags)
Chemv_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Chemv_debug_double_ref_SOURCES=../common/Chemv.debug.cpp $(debug_srcdepends)
Chemv_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Chemv_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Cher_debug_double_SOURCES=../common/Cher.debug.cpp $(debug_srcdepends)
Cher_debug_double_CXXFLAGS=$(debug_cxxflags)
Cher_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Cher_debug_double_ref_SOURCES=../common/Cher.debug.cpp $(debug_srcdepends)
Cher_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Cher_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Cher2_debug_double_SOURCES=../common/Cher2.debug.cpp $(debug_srcdepends)
Cher2_debug_double_CXXFLAGS=$(debug_cxxflags)
Cher2_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Cher2_debug_double_ref_SOURCES=../common/Cher2.debug.cpp $(debug_srcdepends)
Cher2_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Cher2_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Cher2k_debug_double_SOURCES=../common/Cher2k.debug.cpp $(debug_srcdepends)
Cher2k_debug_double_CXXFLAGS=$(debug_cxxflags)
Cher2k_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Cher2k_debug_double_ref_SOURCES=../common/Cher2k.debug.cpp $(debug_srcdepends)
Cher2k_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Cher2k_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Cherk_debug_double_SOURCES=../common/Cherk.debug.cpp $(debug_srcdepends)
Cherk_debug_double_CXXFLAGS=$(debug_cxxflags)
Cherk_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Cherk_debug_double_ref_SOURCES=../common/Cherk.debug.cpp $(debug_srcdepends)
Cherk_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Cherk_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Chpmv_debug_double_SOURCES=../common/Chpmv.debug.cpp $(debug_srcdepends)
Chpmv_debug_double_CXXFLAGS=$(debug_cxxflags)
Chpmv_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Chpmv_debug_double_ref_SOURCES=../common/Chpmv.debug.cpp $(debug_srcdepends)
Chpmv_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Chpmv_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Chpr_debug_double_SOURCES=../common/Chpr.debug.cpp $(debug_srcdepends)
Chpr_debug_double_CXXFLAGS=$(debug_cxxflags)
Chpr_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Chpr_debug_double_ref_SOURCES=../common/Chpr.debug.cpp $(debug_srcdepends)
Chpr_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Chpr_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Chpr2_debug_double_SOURCES=../common/Chpr2.debug.cpp $(debug_srcdepends)
Chpr2_debug_double_CXXFLAGS=$(debug_cxxflags)
Chpr2_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Chpr2_debug_double_ref_SOURCES=../common/Chpr2.debug.cpp $(debug_srcdepends)
Chpr2_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Chpr2_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Crotg_debug_double_SOURCES=../common/Crotg.debug.cpp $(debug_srcdepends)
Crotg_debug_double_CXXFLAGS=$(debug_cxxflags)
Crotg_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Crotg_debug_double_ref_SOURCES=../common/Crotg.debug.cpp $(debug_srcdepends)
Crotg_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Crotg_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Cscal_debug_double_SOURCES=../common/Cscal.debug.cpp $(debug_srcdepends)
Cscal_debug_double_CXXFLAGS=$(debug_cxxflags)
Cscal_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Cscal_debug_double_ref_SOURCES=../common/Cscal.debug.cpp $(debug_srcdepends)
Cscal_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Cscal_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Cswap_debug_double_SOURCES=../common/Cswap.debug.cpp $(debug_srcdepends)
Cswap_debug_double_CXXFLAGS=$(debug_cxxflags)
Cswap_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Cswap_debug_double_ref_SOURCES=../common/Cswap.debug.cpp $(debug_srcdepends)
Cswap_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Cswap_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Csymm_debug_double_SOURCES=../common/Csymm.debug.cpp $(debug_srcdepends)
Csymm_debug_double_CXXFLAGS=$(debug_cxxflags)
Csymm_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Csymm_debug_double_ref_SOURCES=../common/Csymm.debug.cpp $(debug_srcdepends)
Csymm_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Csymm_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Csyr2k_debug_double_SOURCES=../common/Csyr2k.debug.cpp $(debug_srcdepends)
Csyr2k_debug_double_CXXFLAGS=$(debug_cxxflags)
Csyr2k_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Csyr2k_debug_double_ref_SOURCES=../common/Csyr2k.debug.cpp $(debug_srcdepends)
Csyr2k_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Csyr2k_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Csyrk_debug_double_SOURCES=../common/Csyrk.debug.cpp $(debug_srcdepends)
Csyrk_debug_double_CXXFLAGS=$(debug_cxxflags)
Csyrk_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Csyrk_debug_double_ref_SOURCES=../common/Csyrk.debug.cpp $(debug_srcdepends)
Csyrk_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Csyrk_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Ctbmv_debug_double_SOURCES=../common/Ctbmv.debug.cpp $(debug_srcdepends)
Ctbmv_debug_double_CXXFLAGS=$(debug_cxxflags)
Ctbmv_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Ctbmv_debug_double_ref_SOURCES=../common/Ctbmv.debug.cpp $(debug_srcdepends)
Ctbmv_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Ctbmv_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Ctbsv_debug_double_SOURCES=../common/Ctbsv.debug.cpp $(debug_srcdepends)
Ctbsv_debug_double_CXXFLAGS=$(debug_cxxflags)
Ctbsv_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Ctbsv_debug_double_ref_SOURCES=../common/Ctbsv.debug.cpp $(debug_srcdepends)
Ctbsv_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Ctbsv_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Ctpmv_debug_double_SOURCES=../common/Ctpmv.debug.cpp $(debug_srcdepends)
Ctpmv_debug_double_CXXFLAGS=$(debug_cxxflags)
Ctpmv_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Ctpmv_debug_double_ref_SOURCES=../common/Ctpmv.debug.cpp $(debug_srcdepends)
Ctpmv_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Ctpmv_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Ctpsv_debug_double_SOURCES=../common/Ctpsv.debug.cpp $(debug_srcdepends)
Ctpsv_debug_double_CXXFLAGS=$(debug_cxxflags)
Ctpsv_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Ctpsv_debug_double_ref_SOURCES=../common/Ctpsv.debug.cpp $(debug_srcdepends)
Ctpsv_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Ctpsv_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Ctrmm_debug_double_SOURCES=../common/Ctrmm.debug.cpp $(debug_srcdepends)
Ctrmm_debug_double_CXXFLAGS=$(debug_cxxflags)
Ctrmm_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Ctrmm_debug_double_ref_SOURCES=../common/Ctrmm.debug.cpp $(debug_srcdepends)
Ctrmm_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Ctrmm_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Ctrmv_debug_double_SOURCES=../common/Ctrmv.debug.cpp $(debug_srcdepends)
Ctrmv_debug_double_CXXFLAGS=$(debug_cxxflags)
Ctrmv_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Ctrmv_debug_double_ref_SOURCES=../common/Ctrmv.debug.cpp $(debug_srcdepends)
Ctrmv_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Ctrmv_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Ctrsm_debug_double_SOURCES=../common/Ctrsm.debug.cpp $(debug_srcdepends)
Ctrsm_debug_double_CXXFLAGS=$(debug_cxxflags)
Ctrsm_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Ctrsm_debug_double_ref_SOURCES=../common/Ctrsm.debug.cpp $(debug_srcdepends)
Ctrsm_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Ctrsm_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Ctrsv_debug_double_SOURCES=../common/Ctrsv.debug.cpp $(debug_srcdepends)
Ctrsv_debug_double_CXXFLAGS=$(debug_cxxflags)
Ctrsv_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Ctrsv_debug_double_ref_SOURCES=../common/Ctrsv.debug.cpp $(debug_srcdepends)
Ctrsv_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Ctrsv_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

RCabs1_debug_double_ref_SOURCES=../common/RCabs1.debug.cpp $(debug_srcdepends)
RCabs1_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
RCabs1_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

RCabs1_debug_double_SOURCES=../common/RCabs1.debug.cpp $(debug_srcdepends)
RCabs1_debug_double_CXXFLAGS=$(debug_cxxflags)
RCabs1_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

RCasum_debug_double_ref_SOURCES=../common/RCasum.debug.cpp $(debug_srcdepends)
RCasum_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
RCasum_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

RCasum_debug_double_SOURCES=../common/RCasum.debug.cpp $(debug_srcdepends)
RCasum_debug_double_CXXFLAGS=$(debug_cxxflags)
RCasum_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

RCnrm2_debug_double_ref_SOURCES=../common/RCnrm2.debug.cpp $(debug_srcdepends)
RCnrm2_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
RCnrm2_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

RCnrm2_debug_double_SOURCES=../common/RCnrm2.debug.cpp $(debug_srcdepends)
RCnrm2_debug_double_CXXFLAGS=$(debug_cxxflags)
RCnrm2_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Rasum_debug_double_ref_SOURCES=../common/Rasum.debug.cpp $(debug_srcdepends)
Rasum_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Rasum_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Rasum_debug_double_SOURCES=../common/Rasum.debug.cpp $(debug_srcdepends)
Rasum_debug_double_CXXFLAGS=$(debug_cxxflags)
Rasum_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Raxpy_debug_double_ref_SOURCES=../common/Raxpy.debug.cpp $(debug_srcdepends)
Raxpy_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Raxpy_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Raxpy_debug_double_SOURCES=../common/Raxpy.debug.cpp $(debug_srcdepends)
Raxpy_debug_double_CXXFLAGS=$(debug_cxxflags)
Raxpy_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Rcopy_debug_double_ref_SOURCES=../common/Rcopy.debug.cpp $(debug_srcdepends)
Rcopy_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Rcopy_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Rcopy_debug_double_SOURCES=../common/Rcopy.debug.cpp $(debug_srcdepends)
Rcopy_debug_double_CXXFLAGS=$(debug_cxxflags)
Rcopy_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Rdot_debug_double_ref_SOURCES=../common/Rdot.debug.cpp $(debug_srcdepends)
Rdot_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Rdot_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Rdot_debug_double_SOURCES=../common/Rdot.debug.cpp $(debug_srcdepends)
Rdot_debug_double_CXXFLAGS=$(debug_cxxflags)
Rdot_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Rgbmv_debug_double_ref_SOURCES=../common/Rgbmv.debug.cpp $(debug_srcdepends)
Rgbmv_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Rgbmv_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Rgbmv_debug_double_SOURCES=../common/Rgbmv.debug.cpp $(debug_srcdepends)
Rgbmv_debug_double_CXXFLAGS=$(debug_cxxflags)
Rgbmv_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Rgemm_debug_double_ref_SOURCES=../common/Rgemm.debug.cpp $(debug_srcdepends)
Rgemm_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Rgemm_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Rgemm_debug_double_SOURCES=../common/Rgemm.debug.cpp $(debug_srcdepends)
Rgemm_debug_double_CXXFLAGS=$(debug_cxxflags)
Rgemm_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Rgemv_debug_double_ref_SOURCES=../common/Rgemv.debug.cpp $(debug_srcdepends)
Rgemv_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Rgemv_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Rgemv_debug_double_SOURCES=../common/Rgemv.debug.cpp $(debug_srcdepends)
Rgemv_debug_double_CXXFLAGS=$(debug_cxxflags)
Rgemv_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Rger_debug_double_ref_SOURCES=../common/Rger.debug.cpp $(debug_srcdepends)
Rger_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Rger_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Rger_debug_double_SOURCES=../common/Rger.debug.cpp $(debug_srcdepends)
Rger_debug_double_CXXFLAGS=$(debug_cxxflags)
Rger_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Rnrm2_debug_double_ref_SOURCES=../common/Rnrm2.debug.cpp $(debug_srcdepends)
Rnrm2_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Rnrm2_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Rnrm2_debug_double_SOURCES=../common/Rnrm2.debug.cpp $(debug_srcdepends)
Rnrm2_debug_double_CXXFLAGS=$(debug_cxxflags)
Rnrm2_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Rrot_debug_double_ref_SOURCES=../common/Rrot.debug.cpp $(debug_srcdepends)
Rrot_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Rrot_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Rrot_debug_double_SOURCES=../common/Rrot.debug.cpp $(debug_srcdepends)
Rrot_debug_double_CXXFLAGS=$(debug_cxxflags)
Rrot_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Rrotg_debug_double_ref_SOURCES=../common/Rrotg.debug.cpp $(debug_srcdepends)
Rrotg_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Rrotg_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Rrotg_debug_double_SOURCES=../common/Rrotg.debug.cpp $(debug_srcdepends)
Rrotg_debug_double_CXXFLAGS=$(debug_cxxflags)
Rrotg_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Rrotm_debug_double_ref_SOURCES=../common/Rrotm.debug.cpp $(debug_srcdepends)
Rrotm_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Rrotm_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Rrotm_debug_double_SOURCES=../common/Rrotm.debug.cpp $(debug_srcdepends)
Rrotm_debug_double_CXXFLAGS=$(debug_cxxflags)
Rrotm_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Rsbmv_debug_double_ref_SOURCES=../common/Rsbmv.debug.cpp $(debug_srcdepends)
Rsbmv_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Rsbmv_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Rsbmv_debug_double_SOURCES=../common/Rsbmv.debug.cpp $(debug_srcdepends)
Rsbmv_debug_double_CXXFLAGS=$(debug_cxxflags)
Rsbmv_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Rscal_debug_double_ref_SOURCES=../common/Rscal.debug.cpp $(debug_srcdepends)
Rscal_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Rscal_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Rscal_debug_double_SOURCES=../common/Rscal.debug.cpp $(debug_srcdepends)
Rscal_debug_double_CXXFLAGS=$(debug_cxxflags)
Rscal_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Rspmv_debug_double_ref_SOURCES=../common/Rspmv.debug.cpp $(debug_srcdepends)
Rspmv_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Rspmv_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Rspmv_debug_double_SOURCES=../common/Rspmv.debug.cpp $(debug_srcdepends)
Rspmv_debug_double_CXXFLAGS=$(debug_cxxflags)
Rspmv_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Rspr_debug_double_ref_SOURCES=../common/Rspr.debug.cpp $(debug_srcdepends)
Rspr_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Rspr_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Rspr_debug_double_SOURCES=../common/Rspr.debug.cpp $(debug_srcdepends)
Rspr_debug_double_CXXFLAGS=$(debug_cxxflags)
Rspr_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Rspr2_debug_double_ref_SOURCES=../common/Rspr2.debug.cpp $(debug_srcdepends)
Rspr2_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Rspr2_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Rspr2_debug_double_SOURCES=../common/Rspr2.debug.cpp $(debug_srcdepends)
Rspr2_debug_double_CXXFLAGS=$(debug_cxxflags)
Rspr2_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Rswap_debug_double_ref_SOURCES=../common/Rswap.debug.cpp $(debug_srcdepends)
Rswap_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Rswap_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Rswap_debug_double_SOURCES=../common/Rswap.debug.cpp $(debug_srcdepends)
Rswap_debug_double_CXXFLAGS=$(debug_cxxflags)
Rswap_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Rsymm_debug_double_ref_SOURCES=../common/Rsymm.debug.cpp $(debug_srcdepends)
Rsymm_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Rsymm_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Rsymm_debug_double_SOURCES=../common/Rsymm.debug.cpp $(debug_srcdepends)
Rsymm_debug_double_CXXFLAGS=$(debug_cxxflags)
Rsymm_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Rsymv_debug_double_ref_SOURCES=../common/Rsymv.debug.cpp $(debug_srcdepends)
Rsymv_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Rsymv_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Rsymv_debug_double_SOURCES=../common/Rsymv.debug.cpp $(debug_srcdepends)
Rsymv_debug_double_CXXFLAGS=$(debug_cxxflags)
Rsymv_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Rsyr_debug_double_ref_SOURCES=../common/Rsyr.debug.cpp $(debug_srcdepends)
Rsyr_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Rsyr_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Rsyr_debug_double_SOURCES=../common/Rsyr.debug.cpp $(debug_srcdepends)
Rsyr_debug_double_CXXFLAGS=$(debug_cxxflags)
Rsyr_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Rsyr2_debug_double_ref_SOURCES=../common/Rsyr2.debug.cpp $(debug_srcdepends)
Rsyr2_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Rsyr2_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Rsyr2_debug_double_SOURCES=../common/Rsyr2.debug.cpp $(debug_srcdepends)
Rsyr2_debug_double_CXXFLAGS=$(debug_cxxflags)
Rsyr2_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Rsyr2k_debug_double_ref_SOURCES=../common/Rsyr2k.debug.cpp $(debug_srcdepends)
Rsyr2k_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Rsyr2k_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Rsyr2k_debug_double_SOURCES=../common/Rsyr2k.debug.cpp $(debug_srcdepends)
Rsyr2k_debug_double_CXXFLAGS=$(debug_cxxflags)
Rsyr2k_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Rsyrk_debug_double_ref_SOURCES=../common/Rsyrk.debug.cpp $(debug_srcdepends)
Rsyrk_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Rsyrk_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Rsyrk_debug_double_SOURCES=../common/Rsyrk.debug.cpp $(debug_srcdepends)
Rsyrk_debug_double_CXXFLAGS=$(debug_cxxflags)
Rsyrk_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Rtbmv_debug_double_ref_SOURCES=../common/Rtbmv.debug.cpp $(debug_srcdepends)
Rtbmv_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Rtbmv_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Rtbmv_debug_double_SOURCES=../common/Rtbmv.debug.cpp $(debug_srcdepends)
Rtbmv_debug_double_CXXFLAGS=$(debug_cxxflags)
Rtbmv_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Rtbsv_debug_double_ref_SOURCES=../common/Rtbsv.debug.cpp $(debug_srcdepends)
Rtbsv_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Rtbsv_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Rtbsv_debug_double_SOURCES=../common/Rtbsv.debug.cpp $(debug_srcdepends)
Rtbsv_debug_double_CXXFLAGS=$(debug_cxxflags)
Rtbsv_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Rtpmv_debug_double_ref_SOURCES=../common/Rtpmv.debug.cpp $(debug_srcdepends)
Rtpmv_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Rtpmv_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Rtpmv_debug_double_SOURCES=../common/Rtpmv.debug.cpp $(debug_srcdepends)
Rtpmv_debug_double_CXXFLAGS=$(debug_cxxflags)
Rtpmv_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Rtpsv_debug_double_ref_SOURCES=../common/Rtpsv.debug.cpp $(debug_srcdepends)
Rtpsv_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Rtpsv_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Rtpsv_debug_double_SOURCES=../common/Rtpsv.debug.cpp $(debug_srcdepends)
Rtpsv_debug_double_CXXFLAGS=$(debug_cxxflags)
Rtpsv_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Rtrmm_debug_double_ref_SOURCES=../common/Rtrmm.debug.cpp $(debug_srcdepends)
Rtrmm_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Rtrmm_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Rtrmm_debug_double_SOURCES=../common/Rtrmm.debug.cpp $(debug_srcdepends)
Rtrmm_debug_double_CXXFLAGS=$(debug_cxxflags)
Rtrmm_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Rtrmv_debug_double_ref_SOURCES=../common/Rtrmv.debug.cpp $(debug_srcdepends)
Rtrmv_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Rtrmv_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Rtrmv_debug_double_SOURCES=../common/Rtrmv.debug.cpp $(debug_srcdepends)
Rtrmv_debug_double_CXXFLAGS=$(debug_cxxflags)
Rtrmv_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Rtrsm_debug_double_ref_SOURCES=../common/Rtrsm.debug.cpp $(debug_srcdepends)
Rtrsm_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Rtrsm_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Rtrsm_debug_double_SOURCES=../common/Rtrsm.debug.cpp $(debug_srcdepends)
Rtrsm_debug_double_CXXFLAGS=$(debug_cxxflags)
Rtrsm_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)

Rtrsv_debug_double_ref_SOURCES=../common/Rtrsv.debug.cpp $(debug_srcdepends)
Rtrsv_debug_double_ref_CXXFLAGS=$(debug_cxxflags)
Rtrsv_debug_double_ref_LDFLAGS=$(ref_libdepends) $(mplibs) $(blas_libs)

Rtrsv_debug_double_SOURCES=../common/Rtrsv.debug.cpp $(debug_srcdepends)
Rtrsv_debug_double_CXXFLAGS=$(debug_cxxflags)
Rtrsv_debug_double_LDFLAGS=$(opt_libdepends) $(mplibs) $(blas_libs)



SHELL = /bin/sh
FORTRAN  = /usr/bin/gfortran -DGFORTRAN -ffixed-line-length-0 -ffree-line-length-0 -m64 -fPIC -shared
OPTS     =
DRVOPTS  = $(OPTS)
NOOPT    = -g -O0
TIMER    = INT_CPU_TIME
LOADER   = /usr/bin/gfortran
LOADOPTS = -DGFORTRAN -ffixed-line-length-0 -ffree-line-length-0 -m64

BLASLIB      = ../../libblas_clik.so
ARCH = /usr/bin/gfortran 
ARCHFLAGS = -DGFORTRAN -ffixed-line-length-0 -ffree-line-length-0 -m64 -shared -L../ -lblas_clik -o
RANLIB = echo
LAPACKLIB    = liblapack_clik.so


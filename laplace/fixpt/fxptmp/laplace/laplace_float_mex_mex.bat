@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2018b
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2018b\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=laplace_float_mex
set MEX_NAME=laplace_float_mex
set MEX_EXT=.mexw64
call "C:\PROGRA~1\MATLAB\R2018b\sys\lcc64\lcc64\mex\lcc64opts.bat"
echo # Make settings for laplace_float_mex > laplace_float_mex_mex.mki
echo COMPILER=%COMPILER%>> laplace_float_mex_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> laplace_float_mex_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> laplace_float_mex_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> laplace_float_mex_mex.mki
echo LINKER=%LINKER%>> laplace_float_mex_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> laplace_float_mex_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> laplace_float_mex_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> laplace_float_mex_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> laplace_float_mex_mex.mki
echo OMPFLAGS= >> laplace_float_mex_mex.mki
echo OMPLINKFLAGS= >> laplace_float_mex_mex.mki
echo EMC_COMPILER=lcc64>> laplace_float_mex_mex.mki
echo EMC_CONFIG=optim>> laplace_float_mex_mex.mki
"C:\Program Files\MATLAB\R2018b\bin\win64\gmake" -j 1 -B -f laplace_float_mex_mex.mk

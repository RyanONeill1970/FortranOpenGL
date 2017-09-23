@cls

@setlocal
@SET PATH=%PATH%;C:\msys64\mingw64\bin\

@set arch=x64
@set gccopts=-D%arch% -DOPENGL -fno-range-check -cpp

@del %arch%\bin\*.* /Q
@del %arch%\obj\*.* /Q

gfortran %gccopts% -c f03gl_gl.f90        -o %arch%\obj\f03gl_gl.o
gfortran %gccopts% -c f03gl_glu.f90       -o %arch%\obj\f03gl_glu.o
gfortran %gccopts% -c OpenGL_gl.f90       -o %arch%\obj\OpenGL_gl.o
gfortran %gccopts% -c OpenGL_freeglut.f90 -o %arch%\obj\OpenGL_freeglut.o
gfortran %gccopts% -c OpenGL_glu.f90      -o %arch%\obj\OpenGL_glu.o

gfortran %gccopts% blender.f90 %arch%\obj\*.o %arch%\lib\*.Lib -o %arch%\bin\blender.exe
gfortran %gccopts% modview.f90 %arch%\obj\*.o %arch%\lib\*.Lib -o %arch%\bin\modview.exe
gfortran %gccopts% plotfunc.f90 %arch%\obj\*.o %arch%\lib\*.Lib -o %arch%\bin\plotfunc.exe
gfortran %gccopts% RandomSphere_FreeGLUT.f90 %arch%\obj\*.o %arch%\lib\*.Lib -o %arch%\bin\RandomSphere.exe
gfortran %gccopts% scube.f90 %arch%\obj\*.o %arch%\lib\*.Lib -o %arch%\bin\scube.exe
gfortran %gccopts% sphere.f90 %arch%\obj\*.o %arch%\lib\*.Lib -o %arch%\bin\sphere.exe
gfortran %gccopts% stars.f90 %arch%\obj\*.o %arch%\lib\*.Lib -o %arch%\bin\stars.exe

@copy %arch%\dll\*.* %arch%\bin\ >NUL

@endlocal

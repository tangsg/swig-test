%module example
%{
    #define SWIG_FILE_WITH_INIT
    #include "example.h"
%}

%include "typemaps.i"
%include "numpy.i"
%init %{
   import_array();
%}

%apply int *OUTPUT { int *result };
%apply int *INPUT { int *x, int *y};

%apply int *INPLACE_ARRAY1 {int *a, int *b, int *c};

%include "example.h"


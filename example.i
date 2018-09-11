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

%apply (int *IN_ARRAY1, int DIM1) { (int *a, int len_a), (int *b, int len_b) };
%apply (int *INPLACE_ARRAY1, int DIM1) {int *c, int len_c};

%include "example.h"


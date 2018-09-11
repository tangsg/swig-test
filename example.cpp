#include "example.h"

void Example::say_hello() {
    cout<<"Hello Example."<<endl;
}

void Example::add(int x, int y, int *result) {
    *result = x + y;
}

int Example::sub(int *x, int *y) {
    return *x-*y;
}


void Example::array_add(int *a, int len_a, int *b, int len_b, int *c, int len_c) { 
    int const mmax = std::max(len_a, std::max(len_b, len_c));
    for (int i=0; i<mmax; i++){
        c[i] = a[i] + b[i];
    }
}
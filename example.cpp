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


void Example::array_add(int *a, int *b, int *c) { 
    c[0] = a[0] + b[0]; 
    c[1] = a[1] + b[1]; 
}
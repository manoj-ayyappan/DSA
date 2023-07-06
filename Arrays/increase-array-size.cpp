// how to increase array size
// you cannot directly do so
// there is one way to do it in heap memory

#include<stdio.h>


int main() {
    // initial array of size 5
    int *p = new int[5];
    p[0] = 1; p[1] = 2; p[2] = 3; p[3] = 4; p[4] = 5;

    // new array of size 10
    int *q = new int[10];

    // transfer data
    for (int i = 0; i < 5; i++)
    {
        q[i] = p[i];
    }

    // delete og array
    delete []p;

    // set p
    p = q;

    // remove q
    q = NULL;

    return 0;
    
}
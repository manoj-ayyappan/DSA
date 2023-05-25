// Basics of an array

#include<stdio.h>
int main() {
    // declare an array
    int A[5];
    // declare and initialize array
    int B[5] = {2, 4, 6, 8, 10};
    // set value
    A[0] = 0;

    // initialize array with all 0's
    int C[5] = {0};

    // printf("%d", A[0]);

    for(int i=0; i<5; i++) {
        printf("%d\n", C[i]);
    }

    // can be used in C++
    // for(int x:B) {

    // }

    return 0;
}
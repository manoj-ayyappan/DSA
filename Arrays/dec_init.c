// Declaration and initialization of arrays

#include<stdio.h>

int main() {
    int A[5];
    int B[5] = {2,4,6,8,10};
    int C[5] = {2,4};
    int D[5] = {0};
    int E[] = {2,4,6,8,10,12};

    printf("%d \n", B[3]);
    printf("%d \n", 3[C]);
    printf("%d \n", *(D+3));

    printf("%u \n", E[3]);          // %u is for printing address

    return 0;
}
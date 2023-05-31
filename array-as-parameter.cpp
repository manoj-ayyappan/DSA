// using array as a parameter

#include<stdio.h>

void fun(int A[], int n) {
    int i;

    // for each loop cannot be used with pointer
    // (for each loop is only available in C++)
    
    for(i=0;i<n;i++)
        printf("%d\n", A[i]);
}

int main() {
    int A[5] = {2,4,6,8,10};
    fun(A, 5);
    return 0;
}
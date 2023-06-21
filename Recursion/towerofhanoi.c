// Tower of Hanoi problem using recursion

#include<stdio.h>

void TOH(int n, int A, int B, int C) {          // O(2^n)
    if(n>0) {
        // move plate from Ato B using C
        TOH(n-1, A, C, B);
        printf("(%d, %d) ", A, C);
        TOH(n-1, B, A, C);
    }
}

int main() {
    TOH(3, 1, 2, 3);
    return 0;
}
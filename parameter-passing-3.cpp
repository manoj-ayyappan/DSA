// parameter passing by reference
// doesnt work for C programs only C++
// the swap funct is inserted into the main function

#include<stdio.h>

void swap(int &x, int &y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main() {
    int a=10, b=20;
    swap(a,b);
    printf("A: %d and B:%d\n", a, b);
    return 0;
}
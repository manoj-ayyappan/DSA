// parameter passing by value
// doesnt work for swap funtion
// because its using the formal parameters and the actual parameters remain the same

#include<stdio.h>

void swap(int x, int y) {
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
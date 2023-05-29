// function introduction
// add two numbers

#include<stdio.h>

// add function
int add(int a, int b) {     // these are called formal parameters
    int c = a + b;
    return c;
}

// main function
int main() {
    int x, y, z;
    x = 32;
    y = 65;
    z = add(x, y);          // actual parameters

    printf("Addition = %d\n", z);

    return 0;
}


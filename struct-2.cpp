// Addition and subtraction of 2 complex numbers
#include<stdio.h>

struct Complex
{
    float a;
    float b;
};

int main() {
    struct Complex c1 = {3.1, 5.4};
    struct Complex c2 = {1.7, 8.5};
    struct Complex c3;

    // addition
    c3.a = c1.a + c2.a;
    c3.b = c1.b + c2.b;
    printf("Addition: %f + i%f\n", c3.a, c3.b);

    // subtraction
    c3.a = c1.a - c2.a;
    c3.b = c1.b - c2.b;
    printf("Subtraction: %f + i%f\n", c3.a, c3.b);

    return 0;
}

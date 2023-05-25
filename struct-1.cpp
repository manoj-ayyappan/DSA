// Basics of a Structure

#include<stdio.h>

// define a structure
struct Rectangle
{
    int length;
    int breadth;
};

// main function
int main() {
    // // only declaration
    // struct Rectangle r;

    // initializing a structure
    struct Rectangle r = {10, 5};

    // accessing the variables of the structure
    r.length = 15;
    r.breadth = 2;
    printf("Area of Rectangle: %d\n", r.length*r.breadth);

    return 0;
}

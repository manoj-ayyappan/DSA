// struct as parameter
// pass by value and reference

#include<stdio.h>

struct Rectangle
{
    int length;
    int breadth;
};

int area(struct Rectangle r1) {         // change r1 to &r1  --> pass by reference
    return r1.length*r1.breadth;
}

int main() {
    struct Rectangle r = {10,5};
    printf("%d", area(r));
    return 0;
}

// converting c file to c++ file

// we have one struct and 3 functions
#include<stdio.h>

struct Rectangle
{
    int length;
    int breadth;
};

// all these 3 functions take the struct as input. they should be together

void initialize(struct Rectangle *r, int l, int b) {
    r->length = l;
    r->breadth = b;
}

int area(struct Rectangle r) {
    return r.length * r.breadth;
}

void changelength(struct Rectangle *r, int l) {
    r->length = l;
}

int main() {
    struct Rectangle r;
    initialize(&r, 10, 5);
    int a = area(r);
    changelength(&r, 20);

    return 0;
}

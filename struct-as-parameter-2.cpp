// struct as parameter 2
// pass by address

#include<stdio.h>

struct Rectangle
{
    int length;
    int breadth;
};

void changelen(struct Rectangle *r1, int l) {       
    r1->length = l;
}

int main() {
    struct Rectangle r = {10,5};
    changelen(&r, 20);
    printf("%d", r.length);
    return 0;
}

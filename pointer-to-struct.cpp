// Pointer to structure

#include<iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};
int main() {
    struct Rectangle r = {10, 5};
    struct Rectangle *p = &r;

    Rectangle *p2, *p3;                                                  // struct keyword optional in C++
    p2 = (struct Rectangle *)malloc(sizeof(struct Rectangle));      // in C
    p3 = new Rectangle;                                             // in C++


    r.length = 15;      
    // p.length = 20           wrong
    // *p->length = 20         wrong    . operator is given preference
    (*p).length = 20;
    // or
    p->breadth = 18;

    p2->length = 7;
    p2->breadth = 9;

    cout<<r.length<<endl<<r.breadth<<endl;   

    cout<<p2->length<<endl<<p2->breadth<<endl; 

    return 0;

}

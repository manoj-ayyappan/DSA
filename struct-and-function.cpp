// structure and function
// code to take length and breadth from user and display area and perimeter

#include<stdio.h>
#include<iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};


// processing is done outside the main function

int area(Rectangle r) {                 // struct keyword is optional
    return r.length*r.breadth;
}

int peri(struct Rectangle r) {
    return 2*(r.length + r.breadth);
}

int main() {
    Rectangle r = {0,0};
    
    printf("Enter the length and breadth:\n");
    cin>>r.length>>r.breadth;

    int a = area(r);
    int p = peri(r);

    printf("Area = %d\nPerimeter = %d\n", a, p);

    return 0;
}
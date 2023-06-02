// practice for a modular program
// code to take length and breadth from user and display area and perimeter

#include<stdio.h>
#include<iostream>
using namespace std;

// processing is done outside the main function

int area(int length, int breadth) {
    return length*breadth;
}

int peri(int length, int breadth) {
    return 2*(length + breadth);
}

int main() {
    // user input 
    int length = 0, breadth = 0;            // it is good practice to always initialize variables
    printf("Enter the length and breadth:\n");
    cin>>length>>breadth;

    int a = area(length, breadth);
    int p = peri(length, breadth);

    printf("Area = %d\nPerimeter = %d\n", a, p);

    return 0;
}
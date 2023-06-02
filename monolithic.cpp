// practice for a monolithic program
// code to take length and breadth from user and display area and perimeter

#include<stdio.h>
#include<iostream>
using namespace std;

int main() {
    int length = 0, breadth = 0;            // it is good practice to always initialize variables
    printf("Enter the length and breadth:\n");
    cin>>length>>breadth;

    int area = length*breadth;
    int peri = 2*(length+breadth);

    printf("Area = %d\nPerimeter = %d\n", area, peri);

    return 0;
}
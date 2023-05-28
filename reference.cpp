// reference in C++
// It only works in C++

#include<iostream>
using namespace std;

int main() {
    int a = 10;
    int &r = a;     // creating a reference
    r++;

    cout<<r<<endl;
    cout<<a<<endl;

    int b = 25;
    r = b;          // r is a, so the value of a becomes 25

    cout<<r<<endl<<a<<endl<<b<<endl;

    return 0;
}
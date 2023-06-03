// class and constructor in cpp

#include<iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:
    Rectangle(){                            // default constructor
        length = breadth = 0;
    }
    void setLength(int l) {
        length = l;
    }
    int getLength() {
        return length;
    }
    
    // defined outside the class with scope resolution operator
    Rectangle(int l, int b);
    int area();
    int peri();
    ~Rectangle();
};


Rectangle :: Rectangle(int l, int b) {      // parameterized constructor
    length = l;
    breadth = b;
}

int Rectangle::area() {
    return length*breadth;
}
int Rectangle::peri() {
    return 2*(length+breadth);
}

Rectangle::~Rectangle()         // destructor
{
}

int main() {
    Rectangle r(10,5);

    cout<<"Area:"<<r.area()<<endl;
    cout<<"Perimeter:"<<r.peri()<<endl;
    r.setLength(20);
    cout<<"Length:"<<r.getLength()<<endl;
    return 0;
}


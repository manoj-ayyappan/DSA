// converting c file to c++ file

// we will change the name from struct to class
// and change the end bracket to add all functions

class Rectangle
{
    private:
    int length;
    int breadth;

    public:
    // void initialize(int l, int b) {
    Rectangle(int l, int b) {           // constructor
        length = l;
        breadth = b;
    }

    int area() {
        return length * breadth;
    }

    void changelength(int l) {
        length = l;
    }

};

int main() {
    Rectangle r(10,5);
    // r.initialize(10, 5);
    int a = r.area();
    r.changelength(20);

    return 0;
}

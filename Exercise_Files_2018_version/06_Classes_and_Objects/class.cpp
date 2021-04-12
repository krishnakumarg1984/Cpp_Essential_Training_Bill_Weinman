// class.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

// a very simple class
// interface : is usually in a .h or .hpp file
class C1 {
    int i = 0;  // is in the private section (defaults to private even without the 'private:' keyword)
 public:
    // void setvalue(int value) { i = value; }
    // int getvalue() { return i; }

    void setvalue(int value);
    int getvalue();
};

// Best practice is to separate the implementation from the interface
// Implementation (member function) in a separate .cpp file
void C1::setvalue(int value) {
    i = value;
}

int C1::getvalue() {
    return i;
}

int main() {
    int i = 47;
    C1 o1;

    o1.setvalue(i);
    printf("value is %d\n", o1.getvalue());
    return 0;
}


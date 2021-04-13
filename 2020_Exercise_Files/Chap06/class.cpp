// class.cpp by Bill Weinman <http://bw.org/>
// updated 2020-06-24
#include <cstdio>

// a very simple class
class C1 {
    int i = 0;

   public:
    // void setvalue(int value){ i = value; }
    void setvalue(int value);
    // int getvalue() { return i; }
    int getvalue();
};

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

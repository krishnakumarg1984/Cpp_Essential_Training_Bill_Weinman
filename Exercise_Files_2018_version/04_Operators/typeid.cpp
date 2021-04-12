// typeid.cpp by Bill Weinman <http://bw.org/>
// version of 2018-10-28
#include <cstdio>
#include <string>
#include <typeinfo>
using namespace std;

struct A {
    int x;
};
struct B {
    int x;
};

A a1;
B b1;

int main() {
    printf("Type is %s\n", typeid(int).name());
    printf("Type is %s\n", typeid(string).name());

    printf("Type is %s\n", typeid(A).name());
    if (typeid(b1) == typeid(A)) {
        puts("same");
    } else {
        puts("different");
    }
    return 0;
}

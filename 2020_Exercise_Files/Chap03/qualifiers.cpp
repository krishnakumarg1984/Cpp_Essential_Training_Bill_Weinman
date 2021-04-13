// qualifiers.cpp by Bill Weinman <http://bw.org/>
// updated 2020-06-24
#include <cstdio>

class S {
   public:
    int static_value() {
        static int x = 7;
        return ++x;
    }
};

int func() {
    // int x = 7;
    static int x = 7;
    return ++x;
}

int main() {
    // int i = 42;
    // const int i = 42;
    // i = 73;
    // int i = func();
    // i = func();
    // i = func();
    // printf("The integer is %d\n", i);

    S s1;
    S s2;
    S s3;
    printf("The integer is %d\n", s1.static_value());
    printf("The integer is %d\n", s2.static_value());
    printf("The integer is %d\n", s3.static_value());
    return 0;
}

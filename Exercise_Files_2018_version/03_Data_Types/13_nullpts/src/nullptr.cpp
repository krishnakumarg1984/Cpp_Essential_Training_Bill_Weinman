// nullptr.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

#ifndef NULL
#define NULL (0LL) /* common C++ definition */
/* #define NULL (0) /1* Definition in some other systems*1/ */
#endif

void f(int i) {
    printf("the int is %d\n", i);
}

void f(const char* s) {
    printf("the pointer is %p\n", s);
}

// In C++ we can overload functions
int main() {
    f(3);
    f("MyString");
    f(nullptr);  // 'nullptr' is a special value standardised by Cpp11 & later.
                 // So now no more ambiguity on which function to call
    /* f(NULL); */  // In C language, NULL was okay because it didn't support
                    // function overloading
    return 0;
}

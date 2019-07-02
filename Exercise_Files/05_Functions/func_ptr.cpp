#include <cstdio>
#include <string>
using namespace std;

void myFunc()
{
    puts("This is myFunc()");
}

int main() {

    void (*pfunc) () = myFunc;  // The pointer pfunc points to our function myFunc
    puts("This is main()");
    myFunc();
    pfunc();  // Shortcut in C++. In C, need to do the below
    (*pfunc)();

    return 0;
}


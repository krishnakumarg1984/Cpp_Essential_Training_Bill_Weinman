// working.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

int main() {
    /* int i = 7; */
    /* const int i = 7; */
    /* i = 42; */
    /* printf("The value of i is %d\n", i); */
    /* int y = 42; */

    /* int x = 7; */
    /* int *ip = &x; */
    /* int &y = x; // y is a reference to x, i.e x & y are analogous to
     * hardlinks pointing to the same inode. Exclusive feature of C++ */

    /* y = 5; */
    /* x = 37; */

    /* int z = 73; */
    /* ip = &z; */
    /* printf("The value of ip is %d\n", *ip); */
    /* printf("The value of x is %d\n", x); */
    /* printf("The value of y is %d\n", y); */
    /* printf("The value of z is %d\n", z); */

    /* char s[] = "MyString"; */
    /* /1* char s[] = {'M','y','S','t','r','i','n','g',0}; *1/ */
    /* printf("The defined string: is %s\n", s); */

    /* for (int i = 0; s[i]!=0; ++i) { */
    /*    printf("Char is %c\n", s[i]); */
    /* } */

    /* for (char * cp = s; *cp; ++cp) { */
    /*    printf("Char is %c\n", *cp); */
    /* } */

    /* for (char c : s) { */
    /*     if (c == 0) { */
    /*         break; */
    /*     } */
    /*     printf("Char is %c\n", c); */
    /* } */

    /* int x = 42; */
    /* int y = 72; */

    /* if (x > y) { */
    /*     puts("Condition is true"); */
    /* } else if (y > 120) { */
    /*     puts("else if is true"); */
    /* } else  { */
    /*     puts("Condition is false"); */
    /* } */

    if (128) {
        puts("Condition is true");
    } else {
        puts("Condition is false");
    }
    return 0;
}

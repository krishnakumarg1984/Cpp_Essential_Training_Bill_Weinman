// for.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

int main() {
    // basic for loop
    /* for ( int i = 0; i < 5; ++i ) { */
    /*     printf("i is %d\n", i); */
    /* } */

    char mystring[] = "abcdefg";

    /*     for ( int i = 0; mystring[i] !=0; ++i ) { */
    /*         printf("i is %c\n", mystring[i]); */
    /*     } */

    /* for ( char * cp=mystring; *cp; ++cp ) { */
    /*     printf("*cp is %c\n", *cp); */
    /* } */

    /* int myArray[] = { 1, 2, 3, 4, 5}; */

    /* // Range-based arrays */
    /* for ( int i : myArray) { */
    /*     printf("i is %d\n",i); */
    /* } */

    /* // Range-based arrays */
    /* for ( char c : mystring ) { */
    /*     if ( c == 0 ) { */
    /*         break; */
    /*     } */
    /*     printf("c is %c\n", c); */
    /* } */

    // Range-based arrays
    for (char c : "ThisUser") {
        if (c == 0) {
            break;
        }
        printf("c is %c\n", c);
    }

    return 0;
}

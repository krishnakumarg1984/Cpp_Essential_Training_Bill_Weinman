// integers.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

// a byte is 8 bits
constexpr size_t byte = 8;

int main() {
    /* long li = 42L; */
    long int li = 42L;  // It is best to use the full type for clarity
    printf("sizeof char is %ld bits\n", sizeof(char) * byte);
    /* printf("sizeof short int is %ld bits\n", sizeof(short int) * byte); */
    printf("sizeof short int is %ld bits\n", sizeof(short) * byte);
    printf("sizeof int is %ld bits\n", sizeof(int) * byte);
    /* printf("sizeof long int is %ld bits\n", sizeof(long int) * byte); */
    /* printf("sizeof long int is %ld bits\n", sizeof(long) * byte); */
    printf("sizeof li is %ld bits\n", sizeof(li) * byte);
    printf("sizeof long long int is %ld bits\n", sizeof(long long int) * byte);

    /* int x = 42; */
    /* int x = 147; */
    /* int x = 0223; // Octal number */
    /* int x = 0x93; // Hexadecimal number */
    /* int x = 0x0093; // Hexadecimal number */
    /* int x = 0b010010011; // binary number (newer compilers only) */

    /* int x = 147U; // Unsigned */
    /* printf("x is %d\n", x); */

    /* long int x = 147L; // long */
    /* printf("x is %ld\n", x); */
    long long int x = 147LL;  // long long
    printf("x is %lld\n", x);
    return 0;
}

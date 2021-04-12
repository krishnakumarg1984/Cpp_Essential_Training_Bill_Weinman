// working.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

int main() {
  /*
   * // int x = 5;
   * int y = 47;
   * // y = x;
   * // x = y + x;
   * x += y; // x is evaluated just once. No temporary object created.
   * Therefore, efficient printf("x is %d\n", x);
   * // printf("y is %d\n", y);
   */

  // int i = 0;

  /*
   * printf("i is %d\n", i++);
   * printf("i is %d\n", i++);
   * printf("i is %d\n", i++);
   */

  /*
   * int x = 5;
   * int y = 42;
   *
   * if ( x != y ) {
   *     puts("true");
   * } else {
   *     puts("False");
   * }
   */

  /*
   * bool a = true;
   * bool b = true;
   *
   * // if ( a && b) {  // boolean and
   * if ( !(a || b) ) {  // boolean and
   *     puts("true");
   * } else {
   *     puts("false");
   * }
   */

  /*
   * int x = 5;
   * int y = 42;
   * const char * s = x > y ? "Yes" : "no";
   * puts(s);
   */

  /*
   * int x;
   * long long int y;
   * y = 5;
   * // x = 5;
   * // y = x;
   * x = (int) y;
   */

  // const char * s = "mystring";
  // x = (int) s;

  /*
   * printf("x is %d\n", x);
   * printf("y is %lld\n", y);
   */

  /*
   * int x = 5;
   * size_t y = sizeof x;  // sizeof returns size in bytes
   * printf("size of x is %zd\n", y);
   * // printf("size of a standard integer is %zd\n", sizeof(int));  // The
   * parenthesis is required by the word int not by sizeof, because it is a cast
   * here
   * // printf("size of a standard integer is %zd\n", sizeof int);  // The
   * parenthesis is required by the word int not by sizeof, because it is a cast
   * here
   */

  struct X {
    int a;
    int b;
    char c;
    char d;
    long long int e;
    long long int f;
  };
  printf("size of X is %zd\n", sizeof(X));

  return 0;
}

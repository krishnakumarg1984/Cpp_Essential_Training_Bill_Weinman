// working.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

/* int & f(int & i) { */
/*     return ++i; */
/* } */

// typedef may be used to provide an alias for a type name
// a simple alias like this can be convenient for providing architecture
// indepeindependent types
typedef unsigned char
    points_t;  // traditional to name typedefs with the _t appended
typedef unsigned char
    rank_t;  // traditional to name typedefs with the _t appended

struct score {
  points_t p;
  rank_t r;
};

int main() {
  score s = {5, 1};
  printf("Score has %d points and a rank of %d\n", s.p, s.r);

  /* int i = 5; */
  /* int & ir = i; */
  /* ir = 10; */
  /* printf("The value of i is %d\n", i); */
  /* /1* printf("The value of ir is %d\n", ir); *1/ */
  /* /1* printf("f() is %d\n", f(i));  // aargh. Has side-effects on 'i' itself
   * *1/ */
  /* /1* printf("f() is %d\n", f(i) = 42);  // beware. 'i' itself is changed to
   * 42 *1/ */
  /* printf("f() is %d\n", f(i));  // beware. 'i' itself is changed to 42 */
  /* printf("The value of i is %d\n", i); */

  /* puts("Hello, World! \" "); */
  /* puts("Hello, World! \' "); */
  /* puts("Hello, World! \\ "); */
  /* puts("Hello, World! \x40 ");  // @ sign */
  /* puts("Hello, World!\nHello, World!"); */
  /* puts("Hello, World!\tHello, World!"); */
  /* puts("Hello, World! \u03bc ");  // Greek letter 'mu' */
  return 0;
}

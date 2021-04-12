// qualifiers.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

class S {
 public:
  int static_value() {
    static int x = 7;
    return ++x;
  }
};

int func() {
  /* int x = 7; */
  static int x = 7;
  return ++x;
}

int main() {
  /* int i = 42; */
  /* const int i = 42; */
  /* int i = 42; */
  /* i = func(); */
  /* printf("The integer is %d\n", i); */
  /* i = func(); */
  /* printf("The integer is %d\n", i); */
  /* i = func(); */
  /* printf("The integer is %d\n", i); */
  S a;
  S b;
  S c;
  printf("a.static_value() is %d\n",
         a.static_value());  // The same variable x shall be reused for any
                             // instance of the class S. Remember: 'static'
                             // implies the lifetime of the program
  printf("b.static_value() is %d\n", b.static_value());
  printf("c.static_value() is %d\n", c.static_value());
  return 0;
}

// func.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
#include <string>
using namespace std;

// Call by value
// void func(int i) {
//     i = 73;
//     printf("In the func(), the value is %d\n", i);
// }

// // Call by passing in a reference (side-effects & dangerous)
// void func(int i) {
//     printf("In the func(), the value is %d\n", i);
// }

// Call by passing in a pointer (safer than above case)
// Use const qualifier if side-effects to passed arguments are not desired. ie
// const int i as the argument void func(int * i) {
//     *i = 73;
//     printf("In the func(), the value is %d\n", *i);
// }

void func(const string& s) {
  printf("The value is %s\n", s.c_str());
}

int main() {
  // int i = 42;
  // puts("this is main()");
  // func(&i);
  // printf("After func(), the value is %d\n", i);

  string s = "This is a string!";
  func(s);
  return 0;
}

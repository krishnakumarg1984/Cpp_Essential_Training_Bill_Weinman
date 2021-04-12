// func.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
#include <string>
using namespace std;

void func() {
  // int i = 5;
  static int i = 5;
  printf("i is %d\n", ++i);
}

int func_return(int i) {
  puts("This is func_return()");
  return i * 2;
}

// To return a reference to a string (here, reference to 's')
const string& func_ret_strref() {
  const static string s =
      "This is func()";  // static because automatic variables are stored on the
                         // stack and we don't want to store a big string on the
                         // stack for performance reasons. 'const' is always a
                         // good idea especially with static storage, especially
                         // when passing around references. Generally good idea
                         // to use as default for anything
  return s;
}

int main() {
  puts("This is main()");
  // func();
  // func();
  // func();
  // int x = func_return(42);
  // printf("x is %d\n", x);
  // const string s = func_ret_strref();  // Copied into a temporary variable
  // 's'
  const string& s = func_ret_strref();  // More efficient
  printf("function returns: %s\n", s.c_str());

  return 0;
}

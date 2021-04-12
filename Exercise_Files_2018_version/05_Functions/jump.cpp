// jump.cpp by Bill Weinman <http://bw.org/>
// a simple jump table (typing or selecting a menu option)
// updated for C++ EssT 2018-08-08

#include <cstdio>
using namespace std;

// Forward declarations for a couple of functions to come later in the code
const char* prompt();
int jump(const char*);

// 5 simplistic actual functions
void fa() {
  puts("this is fa()");
}
void fb() {
  puts("this is fb()");
}
void fc() {
  puts("this is fc()");
}
void fd() {
  puts("this is fd()");
}
void fe() {
  puts("this is fe()");
}

// A global array of function pointers
void (*funcs[])() = {fa, fb, fc, fd, fe};  // [] to indicate an array

int main() {
  while (jump(prompt()))  // calls prompt() and passes its return value to
                          // jump(), until jump() returns false (0).
    continue;
  puts("\nDone.");
  return 0;
}

const char* prompt() {
  // A little menu here
  puts("Choose an option:");
  puts("1. Function fa()");
  puts("2. Function fb()");
  puts("3. Function fc()");
  puts("4. Function fd()");
  puts("5. Function fe()");
  puts("Q. Quit.");
  printf(">> ");
  fflush(stdout);  // flush after prompt

  const int buffsz = 16;           // constant for buffer size
  static char response[buffsz];    // static storage for response buffer
  fgets(response, buffsz, stdin);  // get response from console

  return response;
}

// Reurns either  1 or 0. i.e. 0 when it is done, and 1 otherwise
int jump(const char* rs) {
  char code = rs[0];
  if (code == 'q' || code == 'Q')
    return 0;

  // get the length of the global funcs array
  int func_length =
      sizeof(funcs) / sizeof(funcs[0]);  // there are 5 items in the array

  int i = (int)code - '0';  // convert ASCII numeral to int
  if (i < 1 || i > func_length) {
    puts("invalid choice");
    return 1;
  } else {
    funcs[i - 1]();  // Remember that C++ arrays are zero-based. Call the
                     // corresponding function from the array of function_ptrs
    return 1;
  }
}

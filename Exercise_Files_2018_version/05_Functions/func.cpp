// func.cpp by Bill Weinman <http://bw.org/>
#include "func.h"
#include <cstdio>
using namespace std;

/*
 * void func() {
 *     puts("this is func()");
 * }
 */

// void func();

int main() {
  puts("this is main()");
  func();
  return 0;
}

void func() {
  puts("this is func()");
}

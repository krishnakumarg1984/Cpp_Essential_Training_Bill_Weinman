// void-type.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

void func(void) {  // for the parameter type 'void' , C & C++ are a little bit
                   // different. 'void' in the argument_list is simply for
                   // compatibility with the 'C' language
  puts("this is void func ( void )");
}

int main() {
  puts("calling func()");
  func();
  return 0;
}

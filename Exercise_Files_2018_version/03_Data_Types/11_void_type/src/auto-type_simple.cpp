// auto-type.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
#include <string>  // string header for stl strings
#include <typeinfo>
using namespace std;

string func() {
  return string("this is a string");
}

int main() {
  auto x = func();
  printf("x is %s\n",
         x.c_str());  // c.str() returns a c-string from an stl string
  if (typeid(x) == typeid(string))
    puts("x is string");
  return 0;
}

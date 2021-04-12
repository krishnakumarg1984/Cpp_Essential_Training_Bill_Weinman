// template-function.cpp by Bill Weinman <http://bw.org/>
// updated 2018-08-18
#include <cstdio>
#include <string>
using namespace std;

template <typename T>  // typename is interchangeable with 'class' here
// note: templates cannot be defined within a block
T maxof(T a, T b) {
  return (a > b ? a : b);
}

int main(int argc, char** argv) {
  // int m = maxof<int>(7, 9);
  // printf("max is: %d\n", m);
  // string m = maxof<string>("seven", "nine");
  // string m = maxof<string>("nine", "seven");
  string m = maxof<string>("seven", "nine");
  printf("max is: %s\n", m.c_str());
  return 0;
}

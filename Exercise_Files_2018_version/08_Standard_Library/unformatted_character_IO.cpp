// working.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

int main() {
  // Write to the console
  fputs("Hello, World!\n", stdout);

  // Read from the console
  const int bufsize = 256;
  static char buf[bufsize];
  fputs("Prompt: ", stdout);
  fflush(stdout);
  fgets(buf, bufsize, stdin);  // Warning: never use gets()!
  fputs(buf, stdout);          // Dispay the buffer on the console

  return 0;
}

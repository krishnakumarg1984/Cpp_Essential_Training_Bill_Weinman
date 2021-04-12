// errno.cpp by Bill Weinman <http://bw.org/>
// updated 2018-10-31
#include <cerrno>  // Provides access to the integer value errno
#include <cstdio>
#include <cstring>  // Required for the strerror() function

int main() {
  printf("errno is: %d\n", errno);
  printf("Erasing file foo.bar\n");
  remove("foo.bar");
  printf("errno is: %d\n", errno);
  // perror("Cannot erase file");  // a :<space> gets appended to this string,
  // followed by the last error message perror("");

  const char* myErrStr = strerror(errno);
  printf("The latest error message is: %s\n", myErrStr);
  return 0;
}

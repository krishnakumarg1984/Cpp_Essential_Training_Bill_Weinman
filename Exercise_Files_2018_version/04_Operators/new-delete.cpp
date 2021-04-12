// new-delete.cpp by Bill Weinman <http://bw.org/>
//   updated 2018-10-27
#include <cstdio>
#include <new>
using namespace std;

constexpr size_t count = 1024;
// constexpr size_t count = 1024000000000000;

int main() {
  printf("allocate space for %lu long int at *ip with new\n", count);

  // allocate array
  long int* ip;

  ip = new (nothrow) long int
      [count];  // the try-catch block is the recommended method of allocating
                // memory. If for some reason, that is not feasible, use this
                // (nothrow) based code and the following exception clause

  if (ip == nullptr) {
    fprintf(stderr, "Cannot allocate memory \n");
    return 1;
  }

  /*
   * try {
   *     ip = new long int [count];  // Alocate space for 1024 long integer
   * objects in memory } catch (std::bad_alloc & ba) { fprintf(stderr, "Cannot
   * allocate memory (%s)\n", ba.what()); return 1;
   * }
   */
  // initialize array
  for (long int i = 0; i < count; ++i) {
    ip[i] = i;
  }

  // print array
  for (long int i = 0; i < count; ++i) {
    printf("%ld ", ip[i]);
  }
  puts("");

  // deallocate array
  delete[] ip;  // Don't use [] if you have only one object
  puts("space at *ip deleted");

  return 0;
}

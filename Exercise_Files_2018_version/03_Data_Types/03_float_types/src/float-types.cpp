// float-types.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

// a byte is 8 bits
constexpr size_t byte = 8;

int main() {
  float f;
  double df;
  long double
      ldf;  // 128 bits are reserved; but only 80 bits are used (certainly not
            // available on MS Visual Studio 2017 where it is still 64 bits)

  printf("size of float f is %ld bits\n", sizeof(f) * byte);
  printf("size of double float df is %ld bits\n", sizeof(df) * byte);
  printf("size of long double float ldf is %ld bits\n", sizeof(ldf) * byte);

  /* f = 500.0; */
  /* f = 5e2; */
  /* f = 5e20; */
  /* printf("value of f is %f\n", f); */
  /* df = 5e20; */
  /* df = .1 + .1 + .1;  // Floating point numbers give you scale, but at the
   * expense of precision */
  ldf = .1 + .1 + .1;  // Floating point numbers give you scale, but at the
                       // expense of precision
  if (ldf == .3) {
    puts("True");
  } else {
    puts("False");
  }
  /* printf("value of df is %lf\n", df); */
  /* printf("value of df is %1.10lf\n", df); */
  printf("value of ldf is %1.20Lf\n", ldf);
  return 0;
}

// On most modern systems, a 32-bit float has a precision of about 7 digits
// On most modern systems, a 64-bit float has a precision of about 16 digits
// On most modern systems, an 80 bit float the precision varies, but still not
// infinite

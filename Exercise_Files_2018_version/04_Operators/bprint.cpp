// bprint.cpp by Bill Weinman <http://bw.org/>
// updated 2018-10-27
#include <cstdint>
#include <cstdio>
using namespace std;

// unsigned 8-bit to string
const char* u8_to_cstr(const uint8_t& x) {
    static char buf[sizeof(x) * 8 + 1];
    for (char& c : buf)
        c = 0;  // reset buffer
    char* bp = buf;
    for (uint8_t bitmask = 0b10000000; bitmask; bitmask >>= 1) {
        *(bp++) = x & bitmask ? '1' : '0';
    }
    return buf;
}

int main() {
    // uint8_t x = 5;
    uint8_t x = 7;
    uint8_t y = 10;
    // uint8_t z = x | y;  // bit-wise OR
    // uint8_t z = x & y;  // bit-wise AND
    // uint8_t z = x ^ y;  // bit-wise XOR
    // uint8_t z = ~ y;  // bit-wise NOT
    // uint8_t z = y << 1;  // left-shift by 1
    uint8_t z = y >> 1;  // right-shift by 1

    printf("x is %s\n", u8_to_cstr(x));
    printf("y is %s\n", u8_to_cstr(y));
    printf("result is %s\n", u8_to_cstr(z));

    return 0;
}

// union.cpp by Bill Weinman <http://bw.org/>
// Same memory space for different types
// Most commmon use case is to provide different representations of the same data
#include <cstdio>
#include <cstdint>
using namespace std;

// The i32 and octets members within the union ipv4 use exactly the same
// address and take up exactly the same space
union ipv4 {
    uint32_t i32;
    struct {
        uint8_t a;
        uint8_t b;
        uint8_t c;
        uint8_t d;
    } octets;
};

int main()
{
    union ipv4 addr;
    addr.octets = { 192, 168, 73, 42 };
    printf("addr is %d.%d.%d.%d is %08x\n",
            addr.octets.a, addr.octets.b, addr.octets.c, addr.octets.d, addr.i32 );
    return 0;
}

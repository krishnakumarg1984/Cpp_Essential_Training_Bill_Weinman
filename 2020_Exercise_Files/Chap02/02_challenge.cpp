// 02_challenge.cpp by Bill Weinman [bw.org]
// updated 2020-07-12
#include <cstdio>

const char string[] = "This is a null-terminated string.";
// const char string[] = "Hello";

int main() {
    int count = 0;
    for (auto c : string) {
        if (c == 0)
            break;

        count++;
    }
    printf("The number of characters is: %d\n", count);
    return 0;
}

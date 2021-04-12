// c-strings.cpp by Bill Weinman <http://bw.org/>
// updated 2020-07-05
#include <cstdio>

int main() {
    // char cstring[] = "String";
    // char cstring[] = {'S', 't', 'r', 'i', 'n', 'g', 0};
    // const char* cstring = "String";
    // const char* const cstring = "String";
    const char* cstring =
        "First-String "
        "Second-String";

    puts(cstring);

    for (int i = 0; cstring[i]; i++) {
        printf("%2d: %c\n", i, cstring[i]);
    }
    return 0;
}

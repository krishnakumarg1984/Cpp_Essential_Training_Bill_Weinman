// file-io.cpp by Bill Weinman <http://bw.org/>
// updated 2018-10-30
#include <cstdio>
using namespace std;

constexpr int maxstring = 1024;    // read buffer size
constexpr int repeat = 5;

int main(int argc, char ** argv) {
    const char * fn = "testfile.txt";   // file name
    const char * str = "This is a literal c-string.\n";

    // create/write the file
    printf("writing file\n");
    FILE * fw = fopen(fn, "w");  // FILE * is a file handle
    for (int i = 0; i < repeat; i++) {
        fputs(str, fw);
    }

    fclose(fw);
    printf("Finished writing to file.\n");

    // read the file
    printf("reading file\n");
    char buf[maxstring];
    FILE * fr = fopen(fn, "r");
    while (fgets(buf, maxstring, fr)) {
        fputs(buf, stdout);
    }

    fclose(fr);
    printf("Finished reading from file.\n");
    remove(fn);

    printf("Removed the file from disk.\n");

    return 0;
}

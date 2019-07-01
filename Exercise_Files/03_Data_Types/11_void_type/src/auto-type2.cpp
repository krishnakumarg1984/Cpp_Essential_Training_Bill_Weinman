// auto-type2.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
    vector<int> vi = { 1, 2, 3, 4, 5 };   // template STL class 'vector' (vector of ints here). template parameter in angled brackets

    /* for (vector<int>::iterator it = vi.begin(); it != vi.end(); ++it) { */
    /*     printf("int is %d\n", *it); */
    /* } */

    // easier to just say auto, easier to read, easier  to type & less prone to error
    for (auto it = vi.begin(); it != vi.end(); ++it) {
        printf("int is %d\n", *it);
    }


    return 0;
}

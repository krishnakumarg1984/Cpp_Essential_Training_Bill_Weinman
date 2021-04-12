// struct.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

struct Employee {
    int id;
    const char * name;
    const char * role;
};

int main() {
    Employee joe = { 42, "Joe", "Boss" };  // Initialiser list: C++11

    Employee * e = &joe;

    printf("%s is the %s and has id %d\n",
            joe.name, joe.role, joe.id);

    printf("%s is the %s and has id %d\n",
            e -> name, e -> role, e -> id);  // -> is the pointer-member operator

    return 0;
}

// updated for C++EssT 2014-10-24

// c++ provides variadic functions!
#include <cstdio>
#include <cstdarg>  // notice this!

// first argument is int count of remaining args
// ... remaining args are doubles for average
double average(const int count, ...) {
    va_list ap;   // Argument pointer. This is a typdef that's found in <cstdarg>. Defines the variable (a pointer) that will be used for the variadic arguments
    int i;
    double total = 0.0;

    va_start(ap, count);
    for (i = 0; i < count; ++i) {
        total += va_arg(ap, double);  // The type of the next argument. Here hard-coded to 'double' since we know a-priori. Increments the pointer by the type, i.e. how far that pointer is incremented, and returns that actual argument
    }
    va_end(ap);  // releases memory. Required to prevent crashes!
    return total / count;
}

// works like printf, format plus args
int message(const char * fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    int rc = vfprintf(stdout, fmt, ap);
    // vfprintf(stdout, fmt, ap);
    puts("");
    va_end(ap);
    return rc;
    // return 0;
}

int main() {
    message("This is a message");
    int ret_val = message("Average: %lf", average(5, 25.0, 35.7, 50.1, 127.6, 75.0)); // The 1st argument is the count. (Here: 5)
    printf("Return value from message() is: %d\n", ret_val);
    return 0;
}


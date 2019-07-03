// iostream-formatting.cpp by Bill Weinman <http://bw.org/>
// updated 2018-10-31
#include <iostream>
#include <string>
#include <iomanip>  // Manipulators to set flags that modify the behaviour of the stream
using namespace std;

int main() {
    /*
    // cout and cin to get a string
    cout << "Prompt: ";
    // string istr;
    // cin >> istr;    // one word at a time
    // cout << "Input: " << istr << endl;

    char buf[128];
    cin.getline(buf, sizeof(buf));
    cout << "Input: " << buf << endl;
    */

    // integer formatting
    cout << "Integer formatting:" << endl;
    int i1 = 42;
    int i2 = 127;
    int i3 = 5555;
    cout << "default: " << i1 << ' ' << i2 << ' ' << i3 << endl;
    cout << "hex: " << hex << i1 << ' ' << i2 << ' ' << i3 << endl;
    cout << "hex with showbase: " << showbase << hex << i1 << ' ' << i2 << ' ' << i3 << endl;
    cout << "octal with showbase: " << oct << i1 << ' ' << i2 << ' ' << i3 << endl;
    cout << "octal with noshowbase: " << noshowbase << oct << i1 << ' ' << i2 << ' ' << i3 << endl;  // DO NOT use this one. Really confusing!
    cout << "default: " << noshowbase << dec << i1 << ' ' << i2 << ' ' << i3 << endl;

    // floating point formatting options
    cout << endl << "Floating point formatting:" << endl;
    double d1, d2, d3;
    d1 = 3.1415926534;
    d2 = 1234.5;
    d3 = 4.2e-10;
    cout << "default: " << d1 << ' ' << d2 << ' ' << d3 << ' ' << endl;
    cout << "fixed: " << fixed << d1 << ' ' << d2 << ' ' << d3 << ' ' << endl;  // by default, fixed sets 6 digits to the right of the decimal point
    cout << "scientific: " << scientific << d1 << ' ' << d2 << ' ' << d3 << ' ' << endl;
    cout << "fixed (3): " << setprecision(3) << fixed << d1 << ' ' << d2 << ' ' << d3 << ' ' << endl;
    cout << "scientific (7): " << setprecision(7) << scientific << d1 << ' ' << d2 << ' ' << d3 << ' ' << endl;
    cout.unsetf(ios_base::floatfield);  // Unset all the flags
    cout << "default: " << d1 << ' ' << d2 << ' ' << d3 << ' ' << endl;

    // string formatting options
    cout << endl << "String formatting:" << endl;
    string s1 = "This is a string.";
    string s2 = "This is a much longer string.";
    string s3 = "Today's news: Big Light in Sky Slated to Appear in East";

    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;

    cout << setw(64) << right << s1 << endl;
    cout << setw(64) << right << s2 << endl;
    cout << setw(64) << right << s3 << endl;

    cout << setfill('-') << setw(64) << right << s1 << endl;
    cout << setfill('_') << setw(64) << right << s1 << endl;
    cout << setfill('$') << setw(64) << right << s1 << endl;
    cout << setfill('!') << setw(64) << right << s1 << endl;
    cout << setfill(' ') << setw(64) << right << s1 << endl;
    cout << left << s1 << endl;

    return 0;
}

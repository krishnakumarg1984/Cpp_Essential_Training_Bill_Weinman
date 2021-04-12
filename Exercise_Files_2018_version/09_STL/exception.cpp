// exception.cpp by Bill Weinman <http://bw.org/>
// updated 2018-10-31
#include <exception>
#include <iostream>
using namespace std;

// The standard exception class is designed to declare objects to be thrown as
// exceptions The exception class has a virtual function called 'what' that
// returns a C-string. This function can be overloaded in derived classes to
// provide a description of the exception.

// If having a generic exception is not sufficient, then can build your own
// exception class inheriting the generic exception class & overload a few
// things what it does
class MyExceptionClass : public exception {
    const char* msg;
    MyExceptionClass();

   public:
    MyExceptionClass(const char* s) throw()
        : msg(s) {}  // Initialise a message in this constructor
    const char* what() const throw() {
        return msg;
    }  // Overloaded what() to return that message
};

const MyExceptionClass e_ouch("Ouch!");
const MyExceptionClass e_bad("Bad Code!");
const MyExceptionClass e_worse("don't do that!");

void broken() {
    cout << "this is a broken function" << endl;
    // throw exception();
    // throw MyExceptionClass("Ouch!");
    // throw e_ouch;
    throw e_worse;
}

int main() {
    cout << "let's have an emergency!" << endl;
    // broken();

    // try {
    //     broken();
    // } catch(exception & e) {
    //     cout << e.what() << endl;
    // }

    try {
        broken();
    } catch (MyExceptionClass& e) {
        cout << e.what() << endl;
    }

    return 0;
}

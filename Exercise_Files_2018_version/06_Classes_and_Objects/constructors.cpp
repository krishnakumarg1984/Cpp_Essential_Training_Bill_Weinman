// constructors.cpp by Bill Weinman <http://bw.org/>
// updated 2018-08-17
#include <cstdio>
#include <string>
using namespace std;

const string unk = "unknown";
const string clone_prefix = "clone-";

// -- interface --
class Animal {
  string _type = unk;
  string _name = unk;
  string _sound = unk;

 public:
  Animal();  // default constructor
  Animal(const string& type,
         const string& name,
         const string& sound);  // constructor with operarands
  Animal(const Animal&);        // copy constructor
  ~Animal();                    // destructor
  void print() const;
};

// -- implementation --
Animal::Animal() {
  puts("default constructor");
}

Animal::Animal(const string& type, const string& name, const string& sound)
    : _type(type),
      _name(name),
      _sound(sound) {  // The stuff after ':' indicates initialisers. They are
                       // very common and convenient. The value used to
                       // initialise is within paranthesis
  puts("constructor with arguments");
}

Animal::Animal(const Animal& a) {
  puts("copy constructor");
  _name = clone_prefix + a._name;
  _type = a._type;
  _sound = a._sound;
}

Animal::~Animal() {  // Runs in reverse order as the constructor does.
  printf("destructor: %s the %s\n", _name.c_str(), _type.c_str());
}

void Animal::print() const {
  printf("%s the %s says %s\n", _name.c_str(), _type.c_str(), _sound.c_str());
}

int main() {
  Animal a;
  a.print();

  const Animal b("goat", "bob", "baah");
  b.print();

  const Animal c =
      b;  // The argument is on the RHS of the = sign. In this case, the
          // argument of the copy constructor is the Animal object 'b'
  c.print();

  puts("end of main");
  return 0;
}

// string.cpp by Bill Weinman <http://bw.org/>
// updated 2018-10-31
#include <iostream>
#include <string>
using namespace std;

int main() {
  string s1 = "This is a string";
  // string s1 = "T";
  string::iterator it;

  // size & length
  cout << "size is same as length: " << s1.size() << endl;
  cout << "size is same as length: " << s1.length() << endl;

  // + for concatenation
  cout << endl << "concatenated strings:" << endl;
  string s2 = "this is also a string";
  cout << s1 + ":" + s2 << endl;

  // compare
  // cout << endl;
  // cout << "String operations :" << endl;
  cout << "Is s1 == s2? " << (s1 == s2 ? "yes" : "no") << endl;
  cout << "copy-assign s2 = s1" << endl;
  s2 = s1;
  cout << "Now, is s1 == s2? " << (s1 == s2 ? "yes" : "no") << endl;
  cout << "Is s1 > \"other string\"? " << (s1 > "other string" ? "yes" : "no")
       << endl;
  cout << "Is s1 < \"other string\"? " << (s1 < "other string" ? "yes" : "no")
       << endl;
  cout << "Is \"other string\"? > s1  " << ("other string" > s1 ? "yes" : "no")
       << endl;
  cout << "Is \"other string\" < s1? " << ("other string" < s1 ? "yes" : "no")
       << endl;

  // iteration
  cout << "each character: ";
  for (char c : s1) {
    cout << c << " ";
  }
  cout << endl;

  // insert & erase with an iterator
  it = s1.begin() + 5;
  s1.insert(it, 'X');
  cout << "after insert: " << s1 << endl;

  // The iterator has been used in the previous paragraph and needs to be set
  // again
  it = s1.begin() + 5;
  s1.erase(it);
  cout << "after erase: " << s1 << endl;

  // replace
  s1.replace(5, 2, "ain't");  // At position 5, remove 2 characters and insert
                              // the string in the 3rd argument
  cout << "after replace: " << s1 << endl;

  // substr
  cout << "substr: " << s1.substr(5, 5)
       << endl;  // Return the string in 's1' starting from position 5, and 5
                 // characters long

  // find
  size_t pos = s1.find("s");
  cout << "find first \"s\" in s1 (pos): " << pos << endl;

  // rfind (reverse find  i.e. find from the last/end position of a string)
  pos = s1.rfind("s");
  cout << "find last \"s\" in s1 (pos): " << pos << endl;

  return 0;
}

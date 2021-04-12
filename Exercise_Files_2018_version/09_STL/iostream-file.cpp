// iostream-file.cpp by Bill Weinman <http://bw.org/>
// updated 2018-10-31
#include <cstdio>
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
  static int lineno = 0;
  static const char* filename = "test.txt";
  static const char* textstring = "This is the test file";

  // write a file
  cout << "Here, we begin writing the file:" << endl;
  ofstream ofile(filename);  // Open a filestream. ofstream is a class and the
                             // object name is ofile
  ofile << ++lineno << " " << textstring << endl;
  ofile << ++lineno << " " << textstring << endl;
  ofile << ++lineno << " " << textstring << endl;
  ofile.close();
  cout << "Finished writing the file." << endl;

  // read a file
  static char buf[128];
  cout << endl << "Read the file (that was just written):" << endl;
  ifstream infile(
      filename);  // Open an input filestream. ifstream is the class. infile is
                  // the object name that we have chosen
  while (infile.good()) {
    infile.getline(buf, sizeof(buf));
    cout << buf << endl;  // Display the line contents read from the file onto
                          // the screen
  }
  infile.close();

  // delete file
  cout << "delete file." << endl;
  remove(filename);  // from the cstdio library
  return 0;
}

#include <iostream>
#include <fstream>

using namespace std;

int main() {
  ofstream myfile;
  myfile.open("points");
  myfile << "0 0" << endl;
  myfile << "1 1" << endl;
  myfile << "2 2" << endl;
  myfile.close();
  return 0;
}

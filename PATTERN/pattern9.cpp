#include <iostream>
using namespace std;

int main() {
  // size of the triangle
  int size;
  cout << "Enter number of rows: ";
  cin >> size;
  // loop to print the pattern
  for (int i = 0; i < size; i++)
   {
    // print spaces
    for (int j = 1; j < size - 1; j++) {
      cout << " ";
    }
    // print stars
    for (int k = 0; k <= size-i; k++) {
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}
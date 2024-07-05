
#include <iostream>

using namespace std;

// Define the struct c
struct c {
  int d;
  int g;
};

int main() {
  // Declare and initialize variables
  struct c i;
  struct c l;
  int n, p;

  // Assign values to i and l
  i.d = 10;
  i.g = 5;
  l.d = i.d;

  // Calculate n
  n = i.d && l.d;

  // Calculate p
  p = l.d | -(l.d && l.d) - n;

  // Print the results
  cout << "i.d = " << i.d << endl;
  cout << "i.g = " << i.g << endl;
  cout << "l.d = " << l.d << endl;
  cout << "n = " << n << endl;
  cout << "p = " << p << endl;

  return 0;
}

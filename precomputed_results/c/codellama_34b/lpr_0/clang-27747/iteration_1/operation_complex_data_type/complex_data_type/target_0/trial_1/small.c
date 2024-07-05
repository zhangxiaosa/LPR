
#include <iostream>

using namespace std;

struct c {
  int d : 18;
  int f;
};
struct c i;
int j;
int main() {
  struct c l = {24, 6738};
  l.d = j;
  int n = j && l.d;
  i.d = l.d | -(l.f && l.d) - n;
}

/* Decomposition of the program into variables with primary data type:

int d = l.d;
int f = l.f;
int j = 24;
int n = 6738;

The target to be optimized is d: int (member of struct c). */


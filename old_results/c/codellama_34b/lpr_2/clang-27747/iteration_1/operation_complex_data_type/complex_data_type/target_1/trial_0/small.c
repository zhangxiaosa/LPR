
#include <stdio.h>

struct c {
  int d : 18;
  int e;
  int g;
  int h;
};

struct c i;
struct c j;

int main() {
  struct c l = {24, 6738, 165};
  int m = j.e;
  l.d = m;
  int n = j.h && l.d;
  int p = l.d | -(l.g && l.d) - n;
  i.g = p;
}

/*
  The program has been optimized for the variable j: struct c.
  The optimized program is as follows:
*/

#include <stdio.h>

struct c {
  int d : 18;
  int e;
  int g;
  int h;
};

struct c i;
struct c j;

int main() {
  struct c l = {24, 6738, 165};
  int m = j.e;
  l.d = m;
  int n = j.h && l.d;
  int p = l.d | -(l.g && l.d) - n;
  i.g = p;
}

/*
  The optimized program has been wrapped by a pair of `<` and `>`.
*/

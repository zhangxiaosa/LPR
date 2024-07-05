#include <iostream>

using namespace std;

typedef signed a;
typedef int b;

struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
};

struct c i;
struct c j;

int main() {
  j.d = j.e;
  b n = j.h && j.d;
  i.g = j.d | -(j.f && j.d) - n;
}

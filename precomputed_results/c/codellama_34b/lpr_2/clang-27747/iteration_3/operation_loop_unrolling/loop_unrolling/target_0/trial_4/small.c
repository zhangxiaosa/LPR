
#include <stdio.h>

struct c {
  int d : 18;
};

int main() {
  struct c l;
  l.d = j.d;
  int n = j.d && l.d;
  int p = l.d | -(l.d && l.d) - n;
  i.d = p;
}

void optimize_loop(int xxx) {
  for (int i = 0; i < xxx; i++) {
    struct c l;
    l.d = j.d;
    int n = j.d && l.d;
    int p = l.d | -(l.d && l.d) - n;
    i.d = p;
  }
}

int main() {
  optimize_loop(10);
  return 0;
}


struct c {
  int d : 18;
  int e;
  int h;
};

struct c i;
struct c j;

int main() {
  struct c l = {24, 6738, 165};
  l.d = j.e;

  int n = j.h && l.d;
  i.d = l.d | -(l.h && l.d) - n;

  // Loop unrolling
  for (int k = 0; k < 4; k++) {
    l.d = j.e;
    n = j.h && l.d;
    i.d = l.d | -(l.h && l.d) - n;
  }
}

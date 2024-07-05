
struct c {
  int d : 18;
};

struct c i;

int main() {
  struct c l;

  int d1 = i.d;
  int d2 = l.d;
  int n = d1 && d2;

  d1 = d2 | -(d2 && d2) - n;

  i.d = d1;
}

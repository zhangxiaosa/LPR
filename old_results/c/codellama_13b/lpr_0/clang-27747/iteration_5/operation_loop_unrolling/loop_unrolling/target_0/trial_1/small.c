
struct c {
  int d : 18;
};

struct c i;

int main() {
  struct c l;
  l.d = i.d;

  int n = i.d && l.d;
  i.d = l.d | -(l.d && l.d) - n;

  for (int j = 0; j < 10; j++) {
    struct c l1;
    l1.d = l.d;

    int n1 = l1.d && l.d;
    l1.d = l.d | -(l1.d && l1.d) - n1;

    l.d = l1.d;
    i.d = l1.d;
  }

  return 0;
}

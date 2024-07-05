
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
}

void inline_function(struct c l, int n) {
  l.d = j.e;
  int n = j.h && l.d;
  i.d = l.d | -(l.h && l.d) - n;
}

int main() {
  struct c l = {24, 6738, 165};
  inline_function(l, 0);
}

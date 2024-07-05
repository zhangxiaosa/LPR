
struct c {
  signed d : 18;
  unsigned e;
  signed g;
  signed h;
} i, j;

int fn1() {
  struct c l = {
    .d = j.e,
    .g = j.h && l.d | -(165 && l.d)
  };
  i.g = l.g;
}

int main() {
  // ...
}

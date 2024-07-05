
struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
};
struct c i;
struct c j;

struct c fn1() {
  struct c l = {24, 6738, 165};
  l.d = j.e;
  l.d = j.h && l.d;
  l.d = l.d | -(l.f && l.d) - l.d;
  i.g = l.d;
}

int main() {}

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

b fn1() {
  struct c l = {24, 6738, 165};
  l.d = j.e;
  b o = l.d;
  signed p = o | -(l.f && l.d);
  i.g = p;
}

int main() {}

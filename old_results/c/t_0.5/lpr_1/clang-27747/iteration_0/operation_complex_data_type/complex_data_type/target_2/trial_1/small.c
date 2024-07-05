typedef int b;

struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
};

struct c i;

int main() {
  struct c l;
  l.d = i.e;
  i.g = -(l.f && l.d) - (i.h && l.d);
}
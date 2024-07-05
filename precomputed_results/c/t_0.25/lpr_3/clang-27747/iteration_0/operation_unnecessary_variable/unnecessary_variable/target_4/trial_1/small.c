typedef int b;

struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
};

int main() {
  struct c l = {24, 6738, 165};
  l.d = l.e;
  b n = (l.h != 0) && (l.d != 0);
  signed p = l.d | -(l.f && l.d) - n;
  l.g = p;
}
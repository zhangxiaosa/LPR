typedef int b;

struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  int g;
  int h;
};

struct c i;
struct c j;

int main() {
  struct c l = {0, 6738, 165};
  b m = j.e;
  l.d = (signed)j.e;
  b n = j.h && l.d;
  b o = l.d;
  signed p = o | -(l.f && l.d) - n;
  i.g = (signed)(o | -(l.f && l.d) - n);
}

struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
};

struct c i = {0, 0, 0, 0, 0};
struct c j = {0, 0, 0, 0, 0};

int main() {
  struct c l = {24, 6738, 165, 0, 0};
  int m = j.e;
  l.d = m;
  int n = j.h && l.d;
  int o = l.d;
  signed p = o | -(l.f && l.d) - n;
  i.g = p;
}
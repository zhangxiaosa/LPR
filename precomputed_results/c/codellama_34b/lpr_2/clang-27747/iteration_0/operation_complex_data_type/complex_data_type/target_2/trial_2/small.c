
typedef unsigned int uint18_t;
typedef unsigned long uint32_t;

struct c {
  uint18_t d;
  uint32_t e;
  uint32_t f;
  int16_t g;
  int16_t h;
};

int main() {
  struct c l = {24, 6738, 165};
  int m = l.e;
  l.d = m;
  int n = l.h && l.d;
  int o = l.d;
  int p = o | -(l.f && l.d) - n;
  i.g = p;
}

struct c {
  int d : 18;
  int e;
  int f;
  int g;
  int h;
};

struct c i;
struct c j;

int main() {
  struct c l = {24, 6738, 165};
  l.d = j.e;
  int n = j.h && j.e;  // Optimized: replaced l.d with j.e
  int o = j.e;  // Optimized: replaced l.d with j.e
  signed p = o | -(l.f && j.e) - n;  // Optimized: replaced l.d with j.e
  i.g = p;
}
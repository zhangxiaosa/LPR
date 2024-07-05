struct c {
  int d : 18;
  int e;
  int f;
  int g;
  int h;
};

struct c i;

int main() {
  struct c l = {24, 6738, 165};
  l.d = l.e; // Assign l.e directly to l.d
  int n = l.h && l.d;
  signed p = l.d | -(l.f && l.d) - n;
  i.g = p;
}
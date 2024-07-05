int j_e;
int j_h;

struct c {
  signed int d : 18;
  unsigned int f;
  signed int g;
};

struct c i;

int main() {
  struct c l;
  l.f = 165;
  l.d = j_e;
  int n = j_h && l.d;
  i.g = l.d | -(l.f && l.d) - n;
}
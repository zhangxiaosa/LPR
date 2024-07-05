
struct c {
  int d : 18;
  int e;
  int g;
  int h;
};

int main() {
  struct c i;
  i.d = 24;
  i.e = 6738;
  i.g = 0;
  i.h = 0;

  int m = i.e;
  i.d = m;
  int n = i.h && i.d;
  int p = i.d | -(i.d) - n;
  i.g = p;
}

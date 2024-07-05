
struct c {
  int d;
  int e;
  int h;
};

int main() {
  int d = 24;
  int e = 6738;
  int h = 165;

  int m = e;
  d = m;
  int n = h && d;
  d = d | -(d && n) - n;
}

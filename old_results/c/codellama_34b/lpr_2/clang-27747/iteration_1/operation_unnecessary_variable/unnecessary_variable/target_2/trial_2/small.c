
struct c {
  int d : 18;
  int e;
  int h : 0; // constant propagation
};

int main() {
  struct c l = {24, 6738, 165};
  int m = j.e;
  l.d = m;
  int n = j.h && m;
  int p = m | -(m && m) - n;
  i.d = p;
}

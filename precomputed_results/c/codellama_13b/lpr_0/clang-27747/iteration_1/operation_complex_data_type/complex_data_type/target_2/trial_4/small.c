
struct c {
  int d : 18;
  int e;
  int h;
};

int main() {
  struct c l = {24, 6738, 165};
  l.d = l.e;
  int n = l.h && l.d;
  l.d = l.d | -(l.h && l.d) - n;
}

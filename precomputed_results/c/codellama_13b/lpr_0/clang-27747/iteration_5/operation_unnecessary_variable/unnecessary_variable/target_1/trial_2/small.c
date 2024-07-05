
struct c {
  int d : 18;
};

int main() {
  struct c l;
  l.d = l.d;
  int n = l.d && l.d;
  l.d = l.d | -(l.d && l.d) - n;
}

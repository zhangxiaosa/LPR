
struct c {
  int d : 18;
  int f;
};
struct c i;
int main() {
  struct c l = {24, 6738};
  int m = 0; // j is unused
  l.d = m;
  int n = 0; // j is unused
  int o = l.d;
  i.d = o | -(l.f && l.d) - n;
}

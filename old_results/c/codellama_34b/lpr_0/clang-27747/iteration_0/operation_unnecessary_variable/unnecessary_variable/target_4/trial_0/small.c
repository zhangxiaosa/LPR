
struct c {
  int d : 18;
  int f;
};
struct c i;
int main() {
  struct c l = {24, 6738};
  int m = 0; // Replace j with 0, as it is not used
  l.d = m;
  int n = 0; // Replace j && l.d with 0, as j is not used
  int o = l.d;
  i.d = o | -(l.f && l.d) - n;
}

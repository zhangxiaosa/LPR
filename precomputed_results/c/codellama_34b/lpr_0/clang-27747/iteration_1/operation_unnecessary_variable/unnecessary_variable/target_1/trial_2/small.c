
struct c {
  int d : 18;
  int f;
};
struct c i;
int main() {
  struct c l = {24, 6738};
  l.d = 0;
  int n = 0;
  i.d = l.d | -(l.f && l.d) - n;
}

int j_e;
struct c {
  int d : 18;
  int f;
  int g;
};
struct c i;
int main() {
  struct c l;
  l.f = 165;
  l.d = j_e;
  int n = l.d;
  i.g = l.d | -(l.f && l.d) - n;
}
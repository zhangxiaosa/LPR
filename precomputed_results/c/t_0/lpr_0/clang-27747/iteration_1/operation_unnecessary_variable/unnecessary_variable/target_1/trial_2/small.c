int j_e;
int j_h;
struct c {
  int d : 18;
  int f;
  int g;
};
struct c i;
int main() {
  struct c l = {24, 6738};
  int m = j_e;
  l.d = m;
  signed p = l.d | -(l.f && l.d) - 0;
  i.g = p;
}
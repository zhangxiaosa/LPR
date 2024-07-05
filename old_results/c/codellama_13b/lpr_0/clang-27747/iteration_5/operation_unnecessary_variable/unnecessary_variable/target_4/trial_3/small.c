
struct c {
  int d : 18;
};
int i_d;
int main() {
  struct c l;
  l.d = i_d;
  int n = 0;
  i_d = i_d | -(i_d && i_d) - n;
}

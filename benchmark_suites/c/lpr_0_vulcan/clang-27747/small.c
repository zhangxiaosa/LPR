struct c {
  signed d : 18;
};
struct c j;
signed main() {
  struct c l;
  l.d = j.d;
  long n = j.d && j.d;
  j.d = l.d | -(j.d && l.d) - n;
}

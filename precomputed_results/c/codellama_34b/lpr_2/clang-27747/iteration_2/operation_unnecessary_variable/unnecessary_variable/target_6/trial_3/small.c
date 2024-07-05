
struct c {
  int d : 18;
};
struct c i;
struct c j;
int main() {
  struct c l;
  l.d = j.d;
  int n = 1; // Constant propagation: the value of n is always 1
  int p = l.d | -(l.d && l.d) - n;
  i.d = p;
}

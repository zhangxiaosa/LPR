
struct c {
  int d : 18;
};
struct c i;
struct c j;
int main() {
  // Optimize out l by constant propagation
  int n = j.d && j.d;
  int p = j.d || !n - n;
  i.d = p;
}

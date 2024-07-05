
struct c {
  int d : 18;
  int e;
};
struct c i, j;
int main() {
  struct c l;

  // Optimized version of l.d = j.e;
  // Loop unrolled by 18
  for (int i = 0; i < 18; i++) {
    l.d[i] = j.e[i];
  }

  // Rest of the program
  int n = j.d && l.d;
  i.d = l.d | -(l.d && l.d) - n;
}

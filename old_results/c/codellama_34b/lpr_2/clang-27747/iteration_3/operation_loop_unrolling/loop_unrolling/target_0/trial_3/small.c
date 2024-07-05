
struct c {
  int d : 18;
};
struct c i;
struct c j;
int main() {
  struct c l;
  l.d = j.d;
  int n = j.d && l.d;
  int p = l.d | -(l.d && l.d) - n;
  i.d = p;
}

// Optimized loop
for (int i = 0; i < 3; i++) {
  struct c l;
  l.d = j.d;
  int n = j.d && l.d;
  int p = l.d | -(l.d && l.d) - n;
  i.d = p;
}


struct c i;
int j;
int main() {
  struct c l = {24, 6738};
  l.d = j;
  int n = j && l.d;
  i.d = l.d | -(l.f && l.d) - n;

  // Unrolled loop
  for (int x = 0; x < n; x += 2) {
    // loop body
    i.d = l.d | -(l.f && l.d) - n;
    i.d = l.d | -(l.f && l.d) - n;
  }
}

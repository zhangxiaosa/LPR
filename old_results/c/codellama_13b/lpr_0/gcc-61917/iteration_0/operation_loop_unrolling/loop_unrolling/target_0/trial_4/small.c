
int main() {
  // Initialization
  a o = 0x4FL;
  f p1 = 0;
  f tmp = 0;

  // Loop unrolling
  for (l = 0; l < 20; l += 4) {
    for (k = 0; k >= -27; k -= 6) {
      p1 = fn2(o, p1);
      p1 = fn2(o, p1);
      p1 = fn2(o, p1);
      p1 = fn2(o, p1);
    }
    p1 = fn2(o, p1);
    p1 = fn2(o, p1);
    p1 = fn2(o, p1);
    p1 = fn2(o, p1);
  }

  // Finalization
  m[2][5] = p1;
  return 0;
}


int g;
int fn1() {
  unsigned j_high_low_low_low = 0xF9;
  unsigned m = j_high_low_low_low;
q:;
  g = g << m;
  if (g)
    goto q;
}
int main() {}

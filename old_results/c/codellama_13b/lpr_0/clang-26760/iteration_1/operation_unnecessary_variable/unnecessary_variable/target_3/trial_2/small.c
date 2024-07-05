
int g;
int fn1() {
  unsigned j_high_low_low_low = 0xF9;
  unsigned m = j_high_low_low_low;
  unsigned o = g;
q:;
  o = o >> 1L;
  if (o) {
    o = o << m;
    goto q;
  }
}
int main() {}

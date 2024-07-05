
struct c {
  int h : 18;
  int e;
  int g;
  int f;
} i, j;

int main() {
  struct c l;
  l.h = j.e;
  int n = j.f && l.h;
  int p = calculate_p(l.h, n);
  i.g = p;
  int e_low = i.e & 0xFF;
  int e_high = (i.e >> 8) & 0xFF;
  int e_middle = (i.e >> 16) & 0xFF;
  int e_xor = i.e ^ 0xFFFFFF;
  int e_or = i.e | 0xFFFFFF;
}

int calculate_p(int lh, int n) {
  return lh | -(165 && lh) - n;
}

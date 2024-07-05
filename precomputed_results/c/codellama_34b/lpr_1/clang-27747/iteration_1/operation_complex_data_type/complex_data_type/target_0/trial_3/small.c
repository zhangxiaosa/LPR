
struct c {
  int d_high_18 : 18;
  int d_low_18 : 18;
  int e;
  int g;
  int h;
};
struct c i;
int main() {
  struct c l;
  int m = i.e;
  l.d_high_18 = m >> 18;
  l.d_low_18 = m & ((1 << 18) - 1);
  int n = i.h && l.d_high_18;
  int p = l.d_low_18 | -(l.d_low_18 && l.d_low_18) - n;
  i.g = p;
}

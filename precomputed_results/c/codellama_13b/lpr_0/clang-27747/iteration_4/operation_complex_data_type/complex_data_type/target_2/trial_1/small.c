
struct c {
  int d_hi : 16;
  int d_lo : 2;
  int d_overflow : 2;
};

struct c i, j;

int main() {
  struct c l;
  l.d_hi = j.d_hi;
  l.d_lo = j.d_lo;
  l.d_overflow = j.d_overflow;
  int n = j.d_hi && l.d_hi && j.d_lo && l.d_lo;
  i.d_hi = l.d_hi | -(l.d_hi && l.d_hi) - n;
  i.d_lo = l.d_lo | -(l.d_lo && l.d_lo) - n;
  i.d_overflow = l.d_overflow | -(l.d_overflow && l.d_overflow) - n;
}

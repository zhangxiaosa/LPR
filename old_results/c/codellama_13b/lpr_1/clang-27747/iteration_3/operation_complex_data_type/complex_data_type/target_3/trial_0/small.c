
struct c_new {
  int h_low : 18;
  int h_high : 16;
} i, j;

int main() {
  int h_low, h_high, n, p, h_low_1, h_high_1;

  h_low = j.h_low;
  n = j.h_low && l.h_low;
  p = l.h_low | -(165 && l.h_low) - n;
  h_low_1 = p & 0x3ffff;
  h_high_1 = p >> 18;
  i.h_low = h_low_1;
  i.h_high = h_high_1;
}

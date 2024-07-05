
struct c_new {
  int h_low : 18;
  int h_high : 16;
} i, j;

int main() {
  int j_h_low, j_h_high;
  struct c_new l;
  l.h_low = j_h_low;
  int n = j_h_low && l.h_low;
  int p = l.h_low | -(165 && l.h_low) - n;
  int h_low_1 = p & 0x3ffff;
  int h_high_1 = p >> 18;
  i.h_low = h_low_1;
  i.h_high = h_high_1;
}

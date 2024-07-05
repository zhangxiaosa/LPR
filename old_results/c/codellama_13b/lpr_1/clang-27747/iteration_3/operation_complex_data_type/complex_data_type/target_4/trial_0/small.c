
struct c_new {
  int h_low : 18;
  int h_high : 16;
} i, j;

int main() {
  int h_low = j.h_low;
  int n = j.h_low && h_low;
  int p = h_low | -(165 && h_low) - n;
  int h_low_1 = p & 0x3ffff;
  int h_high_1 = p >> 18;
  i.h_low = h_low_1;
  i.h_high = h_high_1;
}


struct c_new {
  int h_low : 18;
  int h_high : 16;
} i, j;

int main() {
  struct c_new l;
  int h_low_1 = 0;
  int h_high_1 = 0;
  int n = 0;
  int p = 0;

  h_low_1 = j.h_low;
  n = j.h_low && l.h_low;
  p = l.h_low | -(165 && l.h_low) - n;
  h_high_1 = p >> 18;
  i.h_low = h_low_1;
  i.h_high = h_high_1;
}

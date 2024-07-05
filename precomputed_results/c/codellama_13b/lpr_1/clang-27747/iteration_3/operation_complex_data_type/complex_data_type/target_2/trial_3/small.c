
struct c_new {
  int h_low : 18;
  int h_high : 16;
} i, j;

int main() {
  struct c_new l;
  l.h_low = j.h_low;
  int result = j.h_low & 0x3ffff;
  i.h_low = result;
  i.h_high = result >> 18;
}

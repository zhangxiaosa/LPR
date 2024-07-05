
struct c_new {
  int h_low : 18;
  int h_high : 16;
} i, j;

int main() {
  struct c_new l;
  l.h_low = j.h_low & l.h_low;
  i.h_low = l.h_low & 0x3ffff;
  i.h_high = l.h_high & 0x3ffff;
}

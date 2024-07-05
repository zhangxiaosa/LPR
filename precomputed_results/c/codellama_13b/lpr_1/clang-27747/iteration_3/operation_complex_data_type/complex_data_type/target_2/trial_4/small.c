
struct c_new {
  int h_low : 18;
  int h_high : 16;
} i, j;

int main() {
  struct c_new l;
  l.h_low = j.h_low << 16; // Extract the high 16 bits of j.h_low
  l.h_high = j.h_low >> 18; // Extract the low 18 bits of j.h_low
  i.h_low = l.h_low;
  i.h_high = l.h_high;
}

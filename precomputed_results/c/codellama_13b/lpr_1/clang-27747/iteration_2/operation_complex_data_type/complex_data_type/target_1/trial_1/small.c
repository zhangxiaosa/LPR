
struct c_new {
  int h_low;
  int h_high;
} i, j;

int main() {
  struct c_new l;
  l.h_low = j.h_low;
  l.h_high = j.h_high;
  int n = j.h_low && l.h_low;
  int p = l.h_low | -(165 && l.h_low) - n;
  i.g = p;
}

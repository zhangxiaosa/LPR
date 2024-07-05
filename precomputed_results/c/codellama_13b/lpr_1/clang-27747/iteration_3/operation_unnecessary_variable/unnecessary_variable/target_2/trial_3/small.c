
struct c_new {
  int h_low : 18;
} i, j;
int main() {
  struct c_new l;
  l.h_low = j.h_low;
  // Optimized out by constant propagation
  // int n = j.h_low && l.h_low;
  // Optimized out by copy propagation
  // i.h_low = p;
}

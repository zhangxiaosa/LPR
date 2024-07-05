
struct c_new {
  int h_low : 18;
} i, j;
int main() {
  struct c_new l;
  int h_low_l = j.h_low;
  int h_low_j = j.h_low;
  int n = h_low_j && h_low_l;
  int h_low_i = h_low_l | -(165 && h_low_l) - n;
}


struct c_new {
  int h_low : 18;
} i, j;

int main() {
  int h_low_i = i.h_low;
  int h_low_j = j.h_low;

  int n = h_low_j && h_low_i;

  h_low_i = h_low_i | -(165 && h_low_i) - n;

  return 0;
}

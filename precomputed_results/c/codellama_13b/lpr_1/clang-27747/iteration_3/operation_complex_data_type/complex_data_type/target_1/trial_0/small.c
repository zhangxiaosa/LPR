
int main() {
  int h_low_i = i.h_low;
  int h_low_j = j.h_low;
  int h_high_i = i.h_high;
  int h_high_j = j.h_high;
  int n = h_low_j && h_low_i;
  int p = h_low_i | -(165 && h_low_i) - n;
  i.h_low = p;
}

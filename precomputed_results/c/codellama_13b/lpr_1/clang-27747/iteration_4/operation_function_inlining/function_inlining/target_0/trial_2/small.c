
#include <stdio.h>

struct c_new {
  int h_low : 18;
} i, j;

int main() {
  int h_low = j.h_low;
  int n = j.h_low && h_low;
  i.h_low = h_low | -(165 && h_low) - n;
}

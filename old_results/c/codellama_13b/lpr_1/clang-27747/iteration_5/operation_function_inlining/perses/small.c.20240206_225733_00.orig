
#include <stdio.h>

struct c_new {
  int h_low : 18;
};

struct c_new i;

int main() {
  struct c_new l;
  l.h_low = i.h_low;
  int n = i.h_low && l.h_low;
  i.h_low = l.h_low | -(165 && l.h_low) - n;
}

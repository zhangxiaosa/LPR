#include <stdio.h>

struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
};

struct c i;
struct c j;

int main() {
  struct c l = {24, 6738, 165};
  l.d = 6738; // Optimized constant propagation: l.d = j.e is replaced with the constant value 6738
  int n = j.h && 6738; // Optimized constant propagation: l.d is known to be 6738
  int o = 6738; // Optimized copy propagation: l.d is known to be 6738
  int temp = l.f && 6738; // Optimized constant propagation: l.d and l.f are known to be 6738 and constant/f
  i.g = o | -temp - n;
}
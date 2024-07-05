#include <stdint.h>

int f;
int g;

int main() {
  int i;
  int j = 0x24F96B7B;
  unsigned int k;
  
  for (f = 0;)
    --j;
  
  int l = 1;
  int m = j;
  int n = g;
  int o = n;
  unsigned int p = o;
  
q:
  k = k >> l;
  i = p;
  
  if (i) {
    k = k << m;
    goto q;
  }
}

#include <stdio.h>

/* Decomposition of variable o into primary data types */
unsigned int f;
int g;
int i;
unsigned int j = 0x24F96B7BL;
unsigned int k;
unsigned int l = 1L;
unsigned int m;
int n;
int o;
int p;

int main() {
  /* Initialize variables */
  f = 0;
  g = 0;
  i = 0;
  j = 0x24F96B7BL;
  k = 0;
  l = 1L;
  m = 0;
  n = 0;
  o = 0;
  p = 0;

  /* Loop 1 */
  for (f = 0; f;) {
    for (; j; --j) {
      /* Loop 2 */
      k = (unsigned int)k >> l;
      i = p;
      if (i) {
        k = k << m;
      } else {
        k = 0;
      }
    }
  }

  /* Loop 3 */
  for (; o; --o) {
    /* Loop 4 */
    n = g;
    p = o;
    while (p) {
      k = (unsigned int)k >> l;
      i = p;
      if (i) {
        k = k << m;
      } else {
        k = 0;
      }
    }
  }
}

#include <stdio.h>

int f;

int main() {
  if (f)
    goto i;
  if (f)
    goto i;
  f = 6;
  if (f)
    goto i;
  f = 6;
  return 0;
i:
  f = 6;
  if (f)
    goto i;
  f = 6;
  return 0;
}
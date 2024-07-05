#include<stdio.h>

int f;

int main() {
  if (f) {
    goto i;
  }
  goto label1;

label1:
  if (f) {
    goto i;
  }
  goto label1;

i:
  f = 6L;
  goto label1;
}

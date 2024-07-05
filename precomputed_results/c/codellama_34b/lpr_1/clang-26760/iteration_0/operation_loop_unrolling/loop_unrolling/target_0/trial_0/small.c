
<SYS>

Given the program and the first line of a loop, optimize it out via loop unrolling.. The program is typedef signed a;
typedef int c;
typedef unsigned d;
typedef unsigned e;
d f;
a g;
int main() {
  a i;
  c j = 0x24F96B7BL;
  e k;
  for (f = 0; f;)
    for (; j; --j)
      ;
  a n = g;
q:;
  k = k >> 1L;
  i = n;
  if (i) {
    k = k << j;
    goto q;
  }
}
.                 The target to be optimized is for (; j; --j).

Optimized program:

typedef signed a;
typedef int c;
typedef unsigned d;
typedef unsigned e;
d f;
a g;
int main() {
  a i;
  c j = 0x24F96B7BL;
  e k;
  for (f = 0; f;) {
    for (; j; --j) {
      k = k >> 1L;
      i = n;
      if (i) {
        k = k << j;
        goto q;
      }
    }
  }
q:;
}

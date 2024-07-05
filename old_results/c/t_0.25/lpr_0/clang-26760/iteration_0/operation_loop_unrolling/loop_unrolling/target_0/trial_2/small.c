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
  int unrolled_iterations = j / 4;
  for (f = 0; f < unrolled_iterations; f++) {
    j -= 4;
    j -= 4;
    j -= 4;
    j -= 4;
  }
  while (j > 0) {
    j--;
  }
  c l = 1L;
  c m = j;
  a n = g;
  c o = n;
  e p = o;

q:
  k = k >> l;
  i = p;
  if (i) {
    k = k << m;
    goto q;
  }
}
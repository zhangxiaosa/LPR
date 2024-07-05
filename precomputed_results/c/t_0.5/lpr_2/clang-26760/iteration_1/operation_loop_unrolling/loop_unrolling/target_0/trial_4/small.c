typedef int a;
unsigned f;
a g;

int main() {
  int i;
  int j = 0x24F96B7B;
  unsigned k;
  
  // Unrolled loop iterations
  if (j) --j;
  if (j) --j;
  if (j) --j;
  if (j) --j;
  
  a n = g;
  int o = n;
  unsigned p = o;
q:
  k = k >> 1;
  i = p;
  if (i) {
    k = k << j;
    goto q;
  }
}
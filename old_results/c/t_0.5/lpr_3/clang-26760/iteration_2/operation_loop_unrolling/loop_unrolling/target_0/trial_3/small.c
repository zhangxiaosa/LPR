int main() {
  signed i;
  int j = 0x24F96B7BL;
  unsigned k;
  if (j)
    --j;
  unsigned p = g;

  q1:
  k = k >> 1L;
  i = p;
  if (i) {
    k = k << j;
    goto q2;
  }

  q2:
  k = k >> 1L;
  i = p;
  if (i) {
    k = k << j;
    goto q1;
  }
}
unsigned g;

int main() {
  unsigned j = 0x24F96B7BL;
  unsigned k;

  if (j)
    --j;

q1:
  k = k >> 1L;
  if (true) {
    k = k << j;
  }

q2:
  k = k >> 1L;
  if (true) {
    k = k << j;
  }

q3:
  k = k >> 1L;
  if (true) {
    k = k << j;
  }

q4:
  k = k >> 1L;
  if (true) {
    k = k << j;
  }
}
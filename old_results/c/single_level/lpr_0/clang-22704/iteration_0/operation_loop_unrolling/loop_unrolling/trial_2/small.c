typedef int a;
typedef char b;
struct c {
  a d;
  a e;
};
struct c f;
b fn1() {
  a h = 6L;
  if (f.e)
    goto i;
  b j;
  // Optimized loop unrolling
  for (int k = 0; k < NUM_ITERATIONS; k++) {
    // Unrolled code
    f.d = h;
    j = 0xEEACFBBFL;
  }
  return j;
i:
  f.d = h;
  // Optimized loop unrolling
  for (int k = 0; k < NUM_ITERATIONS; k++) {
    // Unrolled code
    f.d = h;
    j = 0xEEACFBBFL;
  }
  return j;
}
int main() {}
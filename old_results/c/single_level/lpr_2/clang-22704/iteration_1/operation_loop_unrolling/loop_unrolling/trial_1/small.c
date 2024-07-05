struct c {
  int d;
  int e;
};

struct c f;

char fn1() {
  if (f.e)
    goto i;

  char j;

  // First iteration
  goto iteration1;

iteration1:
  // Original loop body start
  // ... unchanged code from original program ...
  // Original loop body end

  // Second iteration
  goto iteration2;

iteration2:
  // Original loop body start
  // ... unchanged code from original program ...
  // Original loop body end

  // Third iteration
  goto iteration3;

iteration3:
  // Original loop body start
  // ... unchanged code from original program ...
  // Original loop body end

  // Return the value of j
  return j;

i:
  f.d = 6L;

  char j = 0xEEACFBBFL;

  // Return the value of j
  return j;
}

int main() {}
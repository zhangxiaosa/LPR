char fn2(char p1, int p2) { 
  return p1; 
}

unsigned v_value;
unsigned u;

int main() {
  int d = 2;
  unsigned e = 0x9EE7F9D1C772505BLL;

  // Iteration 1
  v_value = d;
  d = fn2(v_value, 3) + e;
  u++;

  // Iteration 2
  v_value = d;
  d = fn2(v_value, 3) + e;
  u++;

  // Iteration 3
  v_value = d;
  d = fn2(v_value, 3) + e;
  u++;

  // ... (unroll the loop for 51 iterations)

  // Iteration 51
  v_value = d;
  d = fn2(v_value, 3) + e;
  u++;

  printf("checksum = %x\n", v_value);
  return 0;
}
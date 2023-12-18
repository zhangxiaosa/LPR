int f_d;
int f_e;
char fn1() {
  if (f_e)
    goto i;

  // Loop unrolling begin
  f_d = 6L;

unrolled_loop_1:
  // First iteration of the loop
  f_d = 6L;
  goto unrolled_loop_2;

unrolled_loop_2:
  // Second iteration of the loop
  f_d = 6L;
  goto unrolled_loop_3;

unrolled_loop_3:
  // Third iteration of the loop
  f_d = 6L;
  goto unrolled_loop_4;

unrolled_loop_4:
  // Fourth and final iteration of the loop
  f_d = 6L;
  goto i;

  // Loop unrolling end

i:
  // Continue with the rest of the function
  return 0xEEACFBBFL;
}

int main() {}

typedef int b;
typedef unsigned d;
d g;
b h[] = {0x92A1D2CDL, 0x92A1D2CDL, 0x92A1D2CDL};
static d i = 0x06D7L;

int main() {
  b r[5][9][5];
  
  // Iteration 1
  if (h[2])
    goto end_loop;
  g = r[i][i][i];

  // Iteration 2
  if (h[2])
    goto end_loop;
  g = r[i][i][i];

  // Iteration 3
  if (h[2])
    goto end_loop;
  g = r[i][i][i];

  // ...

end_loop:
  return 0;
}
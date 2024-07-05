typedef int b;
typedef unsigned d;
d g;
b h[] = {0x92A1D2CDL, 0x92A1D2CDL, 0x92A1D2CDL};
static d i = 0x06D7L;

int main() {
  b r[5][9][5];
  
  // Unrolled loop body (4 iterations)
  g = r[i][i][i];
  i++;
  g = r[i][i][i];
  i++;
  g = r[i][i][i];
  i++;
  g = r[i][i][i];
  
  return 0;
}
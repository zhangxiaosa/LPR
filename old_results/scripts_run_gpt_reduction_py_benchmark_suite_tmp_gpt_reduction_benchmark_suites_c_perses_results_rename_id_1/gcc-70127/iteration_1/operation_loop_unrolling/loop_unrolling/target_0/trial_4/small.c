unsigned j;
unsigned u;
typedef struct {
  int ab;
  signed q : 22;
} p;
p v[1];
p w = {0x12345678, 999};
int main() {
  p a = {8L, 666};
  
  a = v[0] = w; // First iteration assignments
  v[0] = a;

  a = v[0] = w; // Second iteration assignments
  v[0] = a;

  a = v[0] = w; // Third iteration assignments
  v[0] = a;

  a = v[0] = w; // Fourth iteration assignments
  v[0] = a;

  j = v[0].q;
  printf("checksum = %X\n", j);
  return 0;
}
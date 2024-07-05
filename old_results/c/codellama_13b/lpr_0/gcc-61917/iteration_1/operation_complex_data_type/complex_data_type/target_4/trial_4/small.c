c
int k;                     // Primary data type: integer
unsigned l;                // Primary data type: unsigned integer
volatile unsigned m[5][8]; // Primary data type: array of unsigned integers
unsigned fn3(unsigned p1) {
  unsigned o; // Primary data type: unsigned integer
  for (;;) {
    for (; l; l--)                  // Primary data type: unsigned integer
      for (k = 0; k >= -27; k -= 6) // Primary data type: integer
        p1 = o - p1;                // Primary data type: unsigned integer
    p1 || m[2][5]; // Primary data type: array of unsigned integers
  }
}
int main() {}


int f; // primary data type: integer
int g; // primary data type: integer
int fn1() {
  int i; // primary data type: integer
  unsigned int j = 0x24F96B7BL; // primary data type: unsigned integer
  unsigned int k; // primary data type: unsigned integer
  for (f = 0; f;) // primary data type: integer
    for (; j; --j) // primary data type: unsigned integer
      ;
  int l = 1L; // primary data type: integer
  int m = j; // primary data type: integer
  unsigned int o = j; // primary data type: unsigned integer
  unsigned int p = o; // primary data type: unsigned integer
q:;
  k = k >> l; // primary data type: unsigned integer
  i = p; // primary data type: unsigned integer
  if (i) { // primary data type: integer
    k = k << m; // primary data type: unsigned integer
    goto q; // primary data type: void
  }
}
int main() {}

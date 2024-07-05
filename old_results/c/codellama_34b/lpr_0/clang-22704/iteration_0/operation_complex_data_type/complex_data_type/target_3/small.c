
int d; // primary data type
int e; // primary data type

int fn1() {
  int h = 6L; // primary data type
  if (e)      // primary data type
    goto i;   // primary data type
  fn1();      // primary data type
  int j;      // primary data type
  return j;   // primary data type
i:
  d = h;           // primary data type
  fn1();           // primary data type
  j = 0xEEACFBBFL; // primary data type
  return j;        // primary data type
}

int main() {} // primary data type

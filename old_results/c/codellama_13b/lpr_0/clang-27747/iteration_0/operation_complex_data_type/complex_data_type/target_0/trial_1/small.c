
struct c {
  int d : 18;  // primary data type: int
  int e;      // primary data type: int
  int f;      // primary data type: int
  int h;      // primary data type: int
};

struct c i;    // primary data type: struct c
struct c j;    // primary data type: struct c

int fn1() {
  struct c l = {24, 6738, 165};  // primary data type: struct c
  int m = j.e;                   // primary data type: int
  l.d = m;                       // primary data type: int
  int n = j.h && l.d;            // primary data type: int
  int o = l.d;                   // primary data type: int
  i.d = o | -(l.f && l.d) - n;    // primary data type: int
}


int j_h; // j_h: int
int n;   // n: int

// Decomposed variables for struct c
int d; // d: int
int e; // e: int
int f; // f: int

int i_g; // i_g: int
int j_e; // j_e: int

int main() {
  d = 24;
  e = 6738;
  f = 165;
  struct c l = {d, e, f};  // l: struct c
  l.d = j_e;              // l.d: int
  n = j_h && l.d;         // n: int
  i_g = l.d | -(l.f && l.d) - n; // i_g: int
}


int d; // d: int
int e; // e: int
int f; // f: int

int j_h; // j_h: int
int n;   // n: int

int i_g; // i_g: int
int j_e; // j_e: int

int main() {
  d = 24;  // d: int
  e = 6738; // e: int
  f = 165; // f: int

  j_h = 0; // j_h: int
  n = 0;   // n: int

  i_g = 0; // i_g: int
  j_e = 0; // j_e: int

  d = j_e; // d: int
  n = j_h && d; // n: int
  i_g = d | -(f && d) - n; // i_g: int
}

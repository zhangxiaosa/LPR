
int j_h; // j_h: int
int n;   // n: int

struct c {
  int d : 18; // d: int
  int e;      // e: int
  int f;      // f: int
};

int i_g; // i_g: int
int j_e; // j_e: int

int main() {
  struct c l = {24, 6738, 165};  // l: struct c
  l.d = j_e;                     // l.d: int
  n = j_h && l.d;                // n: int
  i_g = l.d | -(l.f && l.d) - n; // i_g: int
}

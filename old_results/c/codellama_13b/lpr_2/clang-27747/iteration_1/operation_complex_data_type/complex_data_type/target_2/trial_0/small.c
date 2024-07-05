
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
  int d = l.d;                   // d: int
  int e = l.e;                   // e: int
  int f = l.f;                   // f: int
  n = j_h && d;                  // n: int
  i_g = d | -(e && d) - n;       // i_g: int
}

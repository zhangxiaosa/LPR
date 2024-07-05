
typedef unsigned f;

inline f fn2(f p1, f p2) {
  return p1 - p2;
}

int k;
f l;
volatile f m[5][8];

f fn3(f p1) {
  f o;
  for (;;) {
    for (; l; l++)
      for (k = 0; k >= -27; k -= 6)
        p1 = fn2(o, p1);
    p1 || m[2][5];
  }
}

int main() {
  // Your code here
}

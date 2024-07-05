
typedef unsigned f;

f fn2(f p1, f p2) { return p1 - p2; }

int l;

f fn3(f p1) {
  f o;
  for (;;) {
    for (; l; l++)
      for (int k = 0; k >= -27; k -= 6)
        p1 = fn2(o, p1);
    p1 || p1;
  }
}

int main() {}

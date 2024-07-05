typedef int b;

typedef unsigned c;

typedef unsigned d;

d g;
b h[] = {0x92A1D2CDL, 0x92A1D2CDL, 0x92A1D2CDL};

static d i = 0x06D7L;

d fn2() {
  c q = 0xC3L;
  b r[5][9][5];
  if (h[2])
    return q;
  g = r[i][i][i];

  if (h[2])
    return q;
  g = r[i][i][i];

  // Repeat the above two lines as many times as needed.

  return q;
}

int main() { fn2(); }

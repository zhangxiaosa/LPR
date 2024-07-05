
u_char p19(int p1) {
  int result = 0;
  int a = p1;
  int b = 248;
  int c = 0x2F2F6D26;
  int d = 0;
  int e = 0;
  int f = 0;
  int g = 0;
  int h = 0;
  int i = 0;
  int j = 0;
  int k = 0;
  int l = 0;
  int m = 0;
  int n = 0;
  int o = 0;
  int p = 0;
  int q = 0;
  int r = 0;
  int s = 0;
  int t = 0;
  int u = 0;
  int v = 0;
  int w = 0;
  int x = 0;
  int y = 0;
  int z = 0;

  for (int i = 0; i < 10; i++) {
    a += b;
    c += d;
    f += g;
    h += i;
    j += k;
    l += m;
    n += o;
    p += q;
    r += s;
    t += u;
    v += w;
    x += y;
    z += 1;
  }

  result = (a + b + c + d + e + f + g + h + i + j + k + l + m + n + o + p + q + r + s + t + u + v + w + x + y + z) % 256;

  return (u_char)result;
}

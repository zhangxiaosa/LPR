#include <stdio.h>

static signed g = 1979L;
signed h = 12L;
signed j[5U][5U];
static signed k;
static signed l;
signed m[9U][2U][3U];

signed fn2(signed);
signed fn3() {
  signed p1 = fn2(0);
  p1 || (m[1][0][1] = p1);
  return 0;
}

signed fn2(signed p1) {
  signed v[6U][3U][2U];
  for (; ;) {
    if (k)
      break;
    return v[g][l + 1][l];
  }
  if (h)
    ;
  else
    return j[g][g];
  for (; p1;) {
  }
  return -1357078834L;
}

signed main() {
  fn3();
  return 0;
}

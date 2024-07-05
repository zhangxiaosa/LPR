
<SYS>

int fn1(p2) { return p2; }

struct m {
  int n : 18;
  int o : 1;
};

int r;
static int s = -5;
int u;

int main() {
  struct m ad = {1957};
  ad.o = fn1(5);
  int ae = ad.o;
  ad.o = u;
  r = ad.o % (~s / ae);
}

/* Decomposition of `s` into primary data types:

1. `s_sign` - Sign of `s` (1 if negative, 0 if positive)
2. `s_abs` - Absolute value of `s` (magnitude of `s`)
3. `s_mag` - Magnitude of `s` (absolute value of `s` without the sign)

Note: The decomposition is done to optimize the performance of the program by minimizing the number of operations on the static variable `s`.
*/

int s_sign = s < 0 ? 1 : 0;
int s_abs = s_sign ? -s : s;
int s_mag = s_abs;

r = ad.o % (~s_mag / ae);

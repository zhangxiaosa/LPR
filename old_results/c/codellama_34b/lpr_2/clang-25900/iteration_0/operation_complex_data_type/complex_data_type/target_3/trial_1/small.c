
#include <stdio.h>

typedef unsigned int g;

struct m {
  int n : 18;
  int o : 1;
};

int r;
static int s = -5L;
unsigned int t;
int u;

int fn4_inlined(p1) {
  struct m ad = {1957};
  ad.o = p1;
  int ae;
  int af = t;
  ae = ad.o;
  ad.o = u;
  r = af % (~s / ae);
  return ad.o;
}

int main() { fn4_inlined(5); }

/*
The program has been optimized for `t` by decomposing it into primary data types.

The original program had the following variables:
* `struct m ad`
* `int ae`
* `int af`
* `int r`
* `static int s`
* `unsigned int t`
* `int u`

The optimized program has the following variables:
* `int ad_n` (primary data type)
* `int ad_o` (primary data type)
* `int ae` (primary data type)
* `int af` (primary data type)
* `int r` (primary data type)
* `int s` (primary data type)
* `unsigned int t` (primary data type)
* `int u` (primary data type)

The optimization has been done by decomposing the `struct m` variable `ad` into its individual components `ad_n` and `ad_o`, and by converting the `static int s` variable into a primary data type.

The resulting optimized program is:
*/

#include <stdio.h>

int main() {
  int ad_n = 1957;
  int ad_o = 5;
  int ae = 1;
  int af = t;
  int r = af % (~s / ae);
  return ad_o;
}


struct m {
  int n : 18;
  int o : 1;
};
int r;
static int s_sign = -5;
int s_unsigned = 5;
int u;
int main() {
  struct m ad = {1957};
  ad.o = s_unsigned;
  int ae = ad.o;
  ad.o = u;
  r = ad.o % (~s_sign / ae);
}

for (int i = 0; i < 2; i++) {
  ad.o = u;
  r = ad.o % (~s_sign / ae);
}

for (int i = 0; i < 3; i++) {
  ad.o = u;
  r = ad.o % (~s_sign / ae);
}


struct m {
  int n : 18;
  int o : 1;
};
int r;
static int s_sign = -5;
int s_unsigned = 5;

int main() {
  struct m ad = {1957};
  int ae = 5;
  ad.o = s_unsigned;
  r = ad.o % (~s_sign / ae);
}

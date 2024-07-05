
int r;
static int s_sign = -5;
int s_unsigned = 5;
int u;

int main() {
  int ad = 1957;
  ad = s_unsigned;
  int ae = ad;
  ad = u;
  r = ad % (~s_sign / ae);
}

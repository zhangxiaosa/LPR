
int fn4_inlined(p1) {
  struct m ad = {1957};
  ad.o = p1;
  r_tmp = ad.o % (~(-5) / ad.o);
  r = r_tmp;
  return ad.o;
}

int main() {
  fn4_inlined(5);
}

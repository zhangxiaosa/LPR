
for (int32_t i = 0; i < 17; i++) {
  ad.o = g(v, 5);
  int32_t ae = ad.o;
  ad.o = 5;
  r = t % (17 / ae);
  ad.o;
  ad.o = g(v, 5);
  ae = ad.o;
  ad.o = 5;
  r = t % (17 / ae);
  ad.o;
  ad.o = g(v, 5);
  ae = ad.o;
  ad.o = 5;
  r = t % (17 / ae);
  ad.o;
  // ... and so on, 16 more times
}

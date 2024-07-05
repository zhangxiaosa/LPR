
int fn3(long p1, long p2) {
  long p1_1 = p1 & 0xff;
  long p1_2 = (p1 >> 8) & 0xff;
  long p1_3 = (p1 >> 16) & 0xff;
  long p1_4 = (p1 >> 24) & 0xff;
  long p2_1 = p2 & 0xff;
  long p2_2 = (p2 >> 8) & 0xff;
  long p2_3 = (p2 >> 16) & 0xff;
  long p2_4 = (p2 >> 24) & 0xff;
  long result = p1_1 - p2_1;
  result += p1_2 - p2_2;
  result += p1_3 - p2_3;
  result += p1_4 - p2_4;
  return result;
}

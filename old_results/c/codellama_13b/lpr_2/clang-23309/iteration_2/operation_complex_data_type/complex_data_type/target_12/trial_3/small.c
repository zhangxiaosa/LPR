
unsigned char fn4(short p1, short p2) {
  unsigned char result;
  // Do something with p1 and p2
  result = (p1 & 0xFF) | (p2 & 0xFF);
  return result;
}

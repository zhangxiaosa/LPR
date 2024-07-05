char fn1(char p1, char p2) {
  return p1 * p2;
}

signed i;
signed j;
int main() {
  signed p3;
  
  // Unrolled loop iterations
  p3 = 6;
  j ^= (p3 * i) && 1L;
  p3 = 5;
  j ^= (p3 * i) && 1L;
  p3 = 4;
  j ^= (p3 * i) && 1L;
  p3 = 3;
  j ^= (p3 * i) && 1L;
  p3 = 2;
  j ^= (p3 * i) && 1L;
  p3 = 1;
  j ^= (p3 * i) && 1L;
  p3 = 0;
  j ^= (p3 * i) && 1L;
  p3 = -1;
  j ^= (p3 * i) && 1L;
  p3 = -2;
  j ^= (p3 * i) && 1L;
  p3 = -3;
  j ^= (p3 * i) && 1L;
  p3 = -4;
  j ^= (p3 * i) && 1L;
  p3 = -5;
  j ^= (p3 * i) && 1L;
  p3 = -6;
  j ^= (p3 * i) && 1L;
  
  // The loop has been unrolled
  
  // Rest of the program
}
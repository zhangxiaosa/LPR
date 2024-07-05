char fn1(char p1, char p2) { 
  return p1 * p2; 
}

int main() {
  char p3;
  int i;
  signed j_h;
  
  p3 = 6;
  
  j_h ^= fn1(p3, i) && 1L;
  p3--;
  
  j_h ^= fn1(p3, i) && 1L;
  p3--;
  
  j_h ^= fn1(p3, i) && 1L;
  p3--;
  
  j_h ^= fn1(p3, i) && 1L;
  p3--;
  
  return 0;
}
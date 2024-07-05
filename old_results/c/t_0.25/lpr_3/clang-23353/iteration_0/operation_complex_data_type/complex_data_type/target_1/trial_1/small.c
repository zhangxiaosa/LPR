char fn1(char p1, char p2) {
  return p1 * p2;
}

signed int h;
int i;

int main() {
  char p3;
  char fn1_result;
  
  for (p3 = 6; p3 != -7; p3--) {
    fn1_result = fn1(p3, i);
    h ^= fn1_result & 1;
  }
  
  return 0;
}
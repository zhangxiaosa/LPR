int f;
char j;

char fn1() {
  int h = 6;
  
  if (f != 0)
    goto i;
  
  fn1();
  
  return j;
  
i:
  f = h;
  
  fn1();
  
  j = (char)0xEE;
  
  return j;
}

int main() {}
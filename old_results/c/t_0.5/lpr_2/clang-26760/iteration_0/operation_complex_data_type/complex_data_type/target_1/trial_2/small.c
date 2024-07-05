typedef int a;
typedef short b;

a g;

b fn1() {
  int j = 0x24F96B7B;
  unsigned int k = 0;
  
  for (; j; --j)
    ;

  return (b)g;
}

int main() {
  return 0;
}
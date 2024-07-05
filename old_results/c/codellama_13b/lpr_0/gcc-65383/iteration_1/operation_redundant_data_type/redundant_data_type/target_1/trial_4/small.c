
int g = 0;
unsigned long h2 = 0x92A1D2CDL;
int fn1() {
  if (h2)
    return g;
  g = 1;
}
void fn2() { fn1(); }
int main() { fn2(); }

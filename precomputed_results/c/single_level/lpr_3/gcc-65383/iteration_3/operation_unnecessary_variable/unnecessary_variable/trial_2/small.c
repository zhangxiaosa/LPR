unsigned g;
int h2 = 0x92A1D2CDL;

signed fn2() {
  if (h2)
    return 0xC3L;

  g = 0; // Assigning 0 to g since the elements of r are not used

  for(;;) {} // Infinite loop
}

int main() {
  fn2();
}

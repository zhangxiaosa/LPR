int main() {
  int i;
  
  for (char p3 = 6; p3 != -7; p3--)
    i ^= p3 * i && 1L;
  
  return 0;
}
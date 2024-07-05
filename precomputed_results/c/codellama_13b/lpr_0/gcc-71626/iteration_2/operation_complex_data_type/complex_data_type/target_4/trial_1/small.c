
int main() {
  d result;
  for (int i = 0; i < sizeof(long); i++) {
    result[i] = fn1();
  }
  return 0;
}

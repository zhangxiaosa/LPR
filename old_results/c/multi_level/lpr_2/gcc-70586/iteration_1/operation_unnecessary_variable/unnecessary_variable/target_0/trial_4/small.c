int fn3() {
  int temp = 1 ^ 4294967287;
  int temp2 = 0xE576516E;
  return temp - temp2;
}

int main() {
  if (fn3())
    ;
}
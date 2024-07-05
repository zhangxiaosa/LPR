unsigned n;
int o;
signed fn6() {
  for (; n < 12; n = fn3(n, 3)) {
    if (o <= 0xE3L)
      ;
    else
      break;
  }
  return 0;
}

int main() { 
  fn6(); 
}
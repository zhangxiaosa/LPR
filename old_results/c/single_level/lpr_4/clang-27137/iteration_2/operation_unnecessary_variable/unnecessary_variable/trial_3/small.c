unsigned h;

void fn2(p1) {
  h = p1;
}

short o;

int main() {
  fn2(o);
  printf("checksum = %X\n", h);
  return 0;
}

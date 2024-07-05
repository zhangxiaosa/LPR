char fn2(p1) { return p1; }
int v_value;
int u;

int main() {
  for (; u < 51; ++u)
    fn2(v_value);
  printf("checksum = %x\n", v_value);
  return 0;
}

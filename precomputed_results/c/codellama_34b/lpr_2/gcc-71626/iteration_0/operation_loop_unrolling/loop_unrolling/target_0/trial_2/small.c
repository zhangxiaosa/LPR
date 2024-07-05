
<SYS>

void fn2_unrolled() {
  a c = fn1;
  d f = {c};
  return f;
}

void fn2_unrolled_optimized() {
  a c = fn1;
  return {c};
}

int main() {
  fn2_unrolled_optimized();
  return 0;
}

</SYS>

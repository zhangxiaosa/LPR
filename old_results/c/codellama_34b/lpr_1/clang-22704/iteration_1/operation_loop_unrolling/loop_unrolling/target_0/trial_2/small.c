
<SYS>

typedef char b;
int d;
int e;

b fn1(h) {
  if (e)
    goto i;
  fn1(h);
  return 0xEEACFBBFL;
i:
  d = h;
  fn1(h);
  return 0xEEACFBBFL;
}

int main() {
  // Loop unrolling
  for (int i = 0; i < 10; i++) {
    if (e)
      goto i;
    fn1(h);
    return 0xEEACFBBFL;
  }
}

</SYS>

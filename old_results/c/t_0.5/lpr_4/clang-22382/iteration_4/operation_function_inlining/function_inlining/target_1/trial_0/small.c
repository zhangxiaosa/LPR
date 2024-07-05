unsigned fn2() {
  struct h p;
  struct h r;

  for (;;)
    p = r = p;
}

int main() {}

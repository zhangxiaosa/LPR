long fn2() {
  long c = fn1();
  long f[N];

  for (int i = 0; i < N; i++) {
    f[i] = c;
  }

  return f[0];
}

int main() {
  return 0;
}

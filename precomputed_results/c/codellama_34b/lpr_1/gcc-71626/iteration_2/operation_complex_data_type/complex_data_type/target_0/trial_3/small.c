
long arr[sizeof(d)];

fn2() {
  for (int i = 0; i < sizeof(d); i++) {
    arr[i] = fn1();
  }
  return arr;
}

main() {
  long arr = fn2();
  // use arr as a long array
}


typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn1() {
  long result;
  result = 0;
  return result;
}

d fn2() {
  return (d){fn1};
}

int main() {
  // No need to modify the main function since it is not the target to be optimized
}

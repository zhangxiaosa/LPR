typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn2() {
  d f = {};  // Initialize f with an empty vector
  return f;
}

int main() {
  return 0;
}
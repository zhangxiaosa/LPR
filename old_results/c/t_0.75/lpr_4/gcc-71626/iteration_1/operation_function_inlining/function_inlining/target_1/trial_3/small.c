typedef long d __attribute__((__vector_size__(sizeof(long))));

// Inlined fn2
int main() {
  long c = ;
  d f = {c};
  return f;
}
typedef long a;

double c = 0;
typedef a d __attribute__((__vector_size__(sizeof(a))));
d fn2() {
  d f = {c};
  return f;
}

main() {
}
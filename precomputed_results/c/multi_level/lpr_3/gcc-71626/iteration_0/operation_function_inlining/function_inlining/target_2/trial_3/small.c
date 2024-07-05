typedef long a;

typedef a d __attribute__((__vector_size__(sizeof(a))));

int main() {
  a c = 0;
  d f = {(d) c};
  return 0;
}

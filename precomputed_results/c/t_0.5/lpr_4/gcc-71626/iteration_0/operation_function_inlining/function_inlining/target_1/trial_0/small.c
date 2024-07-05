typedef long a;

void fn1() {}

typedef a d __attribute__((__vector_size__(sizeof(a))));

int main() {
  a c = 0;
  d f = {c};
  return 0;
}

typedef long a;

fn1() {}

typedef a d __attribute__((__vector_size__(sizeof(a))));

d fn2() {
  a c = fn1;
  for (int i = 0; i < sizeof(d); i++) {
    d f = {c};
  }
  return f;
}

int main() {}

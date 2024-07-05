typedef long a;

fn1() {}

typedef a d __attribute__((__vector_size__(sizeof(a))));

main() {}

int main() {
  d f = {\n    // Body of fn1
  };
  return 0;
}
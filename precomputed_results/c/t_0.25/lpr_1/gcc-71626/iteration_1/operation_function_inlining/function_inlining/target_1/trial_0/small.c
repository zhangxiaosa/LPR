typedef long a;

fn1() {}

typedef a d __attribute__((__vector_size__(sizeof(a))));

int main() {
  d f = {fn1};
  return 0;
}
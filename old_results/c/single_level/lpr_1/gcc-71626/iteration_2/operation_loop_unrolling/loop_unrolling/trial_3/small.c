typedef long d __attribute__((__vector_size__(sizeof(long))));

void fn1() {}

void fn2() {
  d f = {fn1};
}

int main() {}

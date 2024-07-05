typedef long a;

typedef a d __attribute__((__vector_size__(sizeof(a))));

a fn2() {
  a c; // Instead of assigning the function `fn1` to `c`, write the code of `fn1` here

  d f = {c};
  return f[0];
}

int main() {
  return 0;
}
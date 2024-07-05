typedef long a;

typedef a d __attribute__((__vector_size__(sizeof(a))));

d fn2() {
  a c; // Variable c of type a (long)

  // Function inlining: Replace fn1() with an empty statement


  d f = {c}; // Initialize f with the value of c

  return f;
}

int main() {
  // Your code here
}

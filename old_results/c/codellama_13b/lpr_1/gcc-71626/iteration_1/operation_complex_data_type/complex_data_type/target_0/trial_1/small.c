

typedef long a;
typedef a __attribute__((__vector_size__(sizeof(long)))) d;

void fn1() {}

d fn2() {
  d f = {fn1};
  return f;
}

int main() {
  // declare a variable to hold the vector
  d v;
  
  // call the function that returns a vector
  v = fn2();
  
  // access the elements of the vector
  a x = v[0];
  a y = v[1];
  a z = v[2];
  
  // use the elements of the vector
  printf("x: %d, y: %d, z: %d\n", x, y, z);
  
  return 0;
}

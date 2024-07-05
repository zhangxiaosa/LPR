
#include <vector>

typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn1() {}

d fn2() {
  d f = {fn1};
  return f;
}

int main() {}

/*
Optimized version of fn2() using function inlining:
*/

d fn2_opt() {
  d f = {fn1_opt()};
  return f;
}

int main() {}

/*
The optimized version of fn2() inlines the call to fn1() and eliminates the need for the intermediate variable f.
This can lead to improved performance and reduced memory usage.
*/

#include <stdint.h>
typedef int64_t a;
typedef a d __attribute__((__vector_size__(sizeof(a))));
d fn2() {
  return d{};
}

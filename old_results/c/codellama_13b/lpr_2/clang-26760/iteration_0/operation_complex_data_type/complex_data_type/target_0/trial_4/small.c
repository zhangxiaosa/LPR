
#include <stdint.h>

int main()
{
  uint32_t j = 0x24F96B7B;
  uint32_t k;
  int32_t i;
  int32_t l = 1;
  int32_t m = j;

  for (; j; --j)
    ;

  k = k >> l;
  i = j;
  if (i) {
    k = k << m;
  }

  return 0;
}

#include <stdint.h>

int32_t f;
int32_t g;
int32_t i;
int32_t j;
uint32_t k;
int32_t l;
int32_t m;
int32_t n;
int32_t o;
uint32_t p;

int main() {
  g = n;

  int32_t tmp_j = j;
  int32_t tmp_g = g;
  uint32_t tmp_k = k;
  int32_t tmp_m = m;
  uint32_t tmp_p = p;

  for (f = 0;)
    --tmp_j;

  int32_t tmp_n = tmp_g;
  int32_t tmp_o = tmp_n;
  tmp_p = tmp_o >> l;
  i = tmp_p;
  
  if (i) {
    tmp_k = tmp_k << tmp_m;
    goto q;
  }

}

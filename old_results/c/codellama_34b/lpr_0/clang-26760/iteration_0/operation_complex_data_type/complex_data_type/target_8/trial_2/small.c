
#include <stdio.h>

unsigned int f_unsigned;
int g_int;
int i_int;
unsigned int j_unsigned;
unsigned int k_unsigned;
unsigned int l_unsigned;
unsigned int m_unsigned;
int n_int;
int o_int;
int p_int;

int main() {
  f_unsigned = 0;
  g_int = 0;
  i_int = 0;
  j_unsigned = 0x24F96B7BL;
  k_unsigned = 0;
  l_unsigned = 1L;
  m_unsigned = j_unsigned;
  n_int = g_int;
  o_int = n_int;
  p_int = o_int;

  while (p_int) {
    k_unsigned = k_unsigned >> l_unsigned;
    i_int = p_int;
    if (i_int) {
      k_unsigned = k_unsigned << m_unsigned;
    } else {
      k_unsigned = 0;
    }
  }
}

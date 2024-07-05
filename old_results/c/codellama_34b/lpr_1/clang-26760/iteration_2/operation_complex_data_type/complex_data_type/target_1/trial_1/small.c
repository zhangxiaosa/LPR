
<SYS>

unsigned g;
int main() {
  unsigned i;
  unsigned j = 0x24F96B7BL;
  unsigned k;
  for (unsigned f; f;)
    for (; j; --j)
      ;
  unsigned n = g;
  while (n) {
    k = k >> 1;
    i = n;
    if (i)
      k = k << j;
  }
}

// Decomposition of variables
unsigned g;
int main() {
  unsigned i;
  unsigned j_hex = 0x24F96B7BL;
  unsigned j_dec = 639;
  unsigned k;
  for (unsigned f; f;)
    for (; j_dec; --j_dec)
      ;
  unsigned n = g;
  while (n) {
    k = k >> 1;
    i = n;
    if (i)
      k = k << j_dec;
  }
}

// Optimization of 'j'
unsigned g;
int main() {
  unsigned i;
  unsigned j_dec = 639;
  unsigned k;
  for (unsigned f; f;)
    for (; j_dec; --j_dec)
      ;
  unsigned n = g;
  while (n) {
    k = k >> 1;
    i = n;
    if (i)
      k = k << 639;
  }
}

// Final program
unsigned g;
int main() {
  unsigned i;
  unsigned k;
  for (unsigned f; f;)
    for (unsigned j = 639; j; --j)
      ;
  unsigned n = g;
  while (n) {
    k = k >> 1;
    i = n;
    if (i)
      k = k << 639;
  }
}

</SYS>

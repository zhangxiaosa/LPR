
<SYS>

// Decomposition of the program into variables with primary data types
unsigned i; //unsigned integer variable
unsigned j = 0x24F96B7BL; //unsigned integer variable
unsigned k; //unsigned integer variable
unsigned f; //unsigned integer variable
unsigned n = g; //unsigned integer variable

// Original program
int main() {
  for (f; f;)
    for (; j; --j)
      ;
  while (n) {
    k = k >> 1;
    i = n;
    if (i)
      k = k << j;
  }
}

// Optimized program with the target `g` optimized
int main() {
  for (f; f;)
    for (; j; --j)
      ;
  while (n) {
    k = k >> 1;
    i = n;
    if (i)
      k = k << j;
  }
  g = k;
}

</SYS>

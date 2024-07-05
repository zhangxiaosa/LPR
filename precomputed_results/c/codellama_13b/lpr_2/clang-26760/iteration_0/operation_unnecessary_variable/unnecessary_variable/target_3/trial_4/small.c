
int f;
int fn1() {
  unsigned j = 0x24F96B7BL;
  unsigned k;
  for (f = 0; f;)
    for (; j; --j)
      ;
  int m = j;
q:;
  k = k >> 1L;
  if (j) {
    k = k << m;
    goto q;
  }
}

* Remove the unused variable `k`:

int f;
int fn1() {
  unsigned j = 0x24F96B7BL;
  for (f = 0; f;)
    for (; j; --j)
      ;
  int m = j;
q:;
  if (j) {
    j = j << m;
    goto q;
  }
}

* Replace the `goto` statement with a loop:

int f;
int fn1() {
  unsigned j = 0x24F96B7BL;
  for (f = 0; f;)
    for (; j; --j)
      ;
  int m = j;
  while (j) {
    j = j << m;
  }
}

* Optimize the loop:

int f;
int fn1() {
  unsigned j = 0x24F96B7BL;
  for (f = 0; f;)
    for (; j; --j)
      ;
  int m = j;
  while (j) {
    j = j << m;
    j = j >> 1L;
  }
}

* Replace the `for` loop with a `while` loop:

int f;
int fn1() {
  unsigned j = 0x24F96B7BL;
  while (f)
    while (j) {
      j = j << m;
      j = j >> 1L;
    }
}

* Remove the unused variable `m`:

int f;
int fn1() {
  unsigned j = 0x24F96B7BL;
  while (f)
    while (j) {
      j = j << j;
      j = j >> 1L;
    }
}

* Optimize the loop further:

int f;
int fn1() {
  unsigned j = 0x24F96B7BL;
  while (f)
    while (j)
      j = j << j;
}


int f;
int j;

int fn1() {
  j = 0x24F96B7B;
  for (f = 0; f;)
    j = 1;
  goto q;

q:;
  j = j >> 1;
  j = j << j;
}

int main() {}

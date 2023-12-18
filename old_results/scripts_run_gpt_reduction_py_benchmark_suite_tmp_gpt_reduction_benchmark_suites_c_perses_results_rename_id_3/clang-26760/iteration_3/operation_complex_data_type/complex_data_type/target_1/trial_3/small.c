unsigned int g;

int main() {
  unsigned int k;
  if (g)
    --g;
q:
  k = k >> 1L;
  if (g)
    goto q;
}
int g;
int main() {
  int j = 0x24F96B7B;
  if (j)
    --j;
q:
  if (g) {
    j = j << j;
    goto q;
  }
}
unsigned g;
int main() {
  unsigned j = 0x24F96B7BL;
  if (j)
    --j;
q:
  if (g) {
    j--;
    goto q;
  }
}
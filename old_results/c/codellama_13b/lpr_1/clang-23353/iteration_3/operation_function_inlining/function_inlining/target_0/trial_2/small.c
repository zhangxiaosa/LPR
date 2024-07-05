
int i;
char j;
int main() {
  for (i = 6; i != -7; i--)
    j ^= i * i && 1L;
  return 0;
}

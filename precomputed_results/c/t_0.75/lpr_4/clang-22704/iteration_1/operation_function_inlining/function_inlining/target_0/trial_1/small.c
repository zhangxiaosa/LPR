struct {
  int d;
  int e;
} f;

int main() {
  if (f.e)
    goto i;
  if (f.e)
    goto i;
  f.d = 6;
  if (f.e)
    goto i;
  return 537164773;
i:
  f.d = 6;
  if (f.e)
    goto i;
  return 537164773;
}
struct c {
  int d;
  int e;
};
struct c f;

int main() {
  if (f.e)
    goto i;
  
  if (f.e)
    goto i;
  char j;
  return j;

i:
  f.d = 6L;
  
  if (f.e)
    goto i;
  j = 0xEEACFBBFL;
  return j;

i:
  f.d = 6L;
  
  if (f.e)
    goto i;
  j = 0xEEACFBBFL;
  return j;
}
struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
};

int main() {
  struct c i;
  struct c j;

  j.e = 6738;
  
  int m = j.e;
  
  i.g = m;
  
  return 0;
}
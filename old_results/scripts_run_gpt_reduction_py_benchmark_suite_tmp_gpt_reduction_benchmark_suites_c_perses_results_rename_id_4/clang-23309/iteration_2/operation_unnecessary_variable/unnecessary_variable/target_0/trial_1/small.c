int t;
int v;
short w;
short ac = 1;
short fn4(short p1, short p2) { return p1; }
int main() {
  
  for (w = 3; w; w -= 1) {
    
    t = ac;
    
    if ((fn4(1 - w, 0xEC)) - t & 1)
      v = 1;
  }
  int p = v;
  printf("checksum = %d\n", p);
  return 0;
}
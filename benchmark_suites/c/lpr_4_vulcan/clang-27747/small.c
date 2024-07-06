struct c {
  int d : 18;
} var1;
signed main() {
  struct c var3;
  var3.d = var1.d;
  long var5 = var1.d && var1.d;
  var1.d = var3.d | -(var1.d && var3.d) - var5;
}

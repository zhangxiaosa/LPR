struct c {
  int d : 18;
  int e;
  int f;
  int g;
  int h;
};

struct c var1;

int main() {
  struct c var3 = {24, 6738, 165};
  var3.d = 24;
  int var5 = var2.h && 24;
  int var6 = 24;
  signed var7 = 24 | -(var3.f && var3.d) - var5;
  var1.g = 24 | -(var3.f && var3.d) - var5;
}
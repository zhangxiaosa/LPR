#include <stdio.h>

struct c {
  int d : 18;
  int e;
  int f;
  int g;
  int h;
};

struct c var1;
struct c var2;

int main() {
  struct c var3 = {24, 6738, 165};
  var3.d = var2.e;
  int var6 = var3.d;
  signed var7 = var6 | -(var3.f && var3.d) - var5;
  var1.g = var6 | -(var3.f && var3.d) - var5;
}

typedef int b;

struct c {
  signed int d : 18;
  unsigned int e;
  unsigned int f;
  signed int g;
  signed int h;
};

struct c var1;
struct c var2;

int main() {
  struct c var3 = {24, 6738, 165};
  int var4 = var2.e;
  var3.d = var2.e;
  int var5 = var2.h && var3.d;
  int var6 = var3.d;
  signed int var7 = var6 | -(var3.f && var3.d) - var5;
  var1.g = var7;
}
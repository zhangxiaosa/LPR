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
  int var5 = var1.h ? 1 : 0;
  var1.g = var3.d | -(var3.f && var3.d) - var5;
}
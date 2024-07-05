int d : 18;
int e;
int f;
int g;
int h;

int var1_d : 18;
int var1_e;
int var1_f;
int var1_g;
int var1_h;

int var2_d : 18;
int var2_e;
int var2_f;
int var2_g;
int var2_h;

int main() {
  int var3_d : 18 = 24;
  int var3_e = 6738;
  int var3_f = 165;

  var3_d = var2_e;
  
  int var5 = var1_h && var3_d;
  
  var1_g = var3_d | -(var3_f && var3_d) - var5;
}
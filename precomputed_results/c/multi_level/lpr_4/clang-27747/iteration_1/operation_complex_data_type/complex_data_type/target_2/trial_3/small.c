#include <stdio.h>

int var1_d;
int var1_e;
int var1_f;
int var1_g;
int var1_h;

int var2_d;
int var2_e;
int var2_f;
int var2_g;
int var2_h;

int var3_d = 24;
int var3_e = 6738;
int var3_f = 165;

var3_d = var2_e;

int var5 = var1_h && var3_d;

var1_g = var3_d | -(var3_f && var3_d) - var5;
}
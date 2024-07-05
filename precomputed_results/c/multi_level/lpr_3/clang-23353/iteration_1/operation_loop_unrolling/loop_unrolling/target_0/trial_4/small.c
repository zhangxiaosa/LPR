#include <stdio.h>

int i;
char j_h;

char fn1(char x, char y) {
   return x * y;
}

int fn2(int p3) {
   char result_1, result_2, result_3;
   int p3_0 = 6;
   int p3_1 = p3_0 - 1;
   int p3_2 = p3_1 - 1;

   result_1 = fn1(p3_0, i);
   j_h ^= result_1 && 1L;

   result_2 = fn1(p3_1, i);
   j_h ^= result_2 && 1L;

   result_3 = fn1(p3_2, i);
   j_h ^= result_3 && 1L;

   return j_h;
}

int main() {
   i = 0;
   j_h = 0;

   j_h = fn2(i);

   return j_h;
}
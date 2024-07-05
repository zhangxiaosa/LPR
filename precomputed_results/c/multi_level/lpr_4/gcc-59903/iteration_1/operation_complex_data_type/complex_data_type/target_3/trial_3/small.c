#include <stdio.h>

unsigned m0, m1, m2, m3;
int n0_j, n0_k, n0_l, n1_j, n1_k, n1_l;
unsigned char q00, q01, q02, q03, q04, q05, q06, q10, q11, q12, q13, q14, q15, q16, q20, q21, q22, q23, q24, q25, q26, q30, q31, q32, q33, q34, q35, q36, q40, q41, q42, q43, q44, q45, q46, q50, q51, q52, q53, q54, q55, q56, q60, q61, q62, q63, q64, q65, q66, q70, q71, q72, q73, q74, q75, q76;

char fn1(unsigned p1, int p2) {
   return p1 > p2 ? p1 : p1 << p2;
}

int j, k, l;

unsigned fn2(int p1, int p2_j, int p2_k, int p2_l, unsigned p3, short p4) {
   int v_j = 0x15L;
   int v_k = -5L;
   int v_l = 0;
   int w;
   int a;

   if (p4 ^ v_k)
      ;
   else {
      n0_j = n1_j;
      n0_k = n1_k;
      n0_l = n1_l;
   }

   for (; w; w += 1) {
      for (p3 = 0; p3 <= 39; ++p3) {
         for (p2_j = 0; p2_j <= 2; p2_j += 1) {
            n0_j = v_j;
            n0_k = v_k;
            n0_l = v_l;

            if (n0_j == 0)
               ;
            else {
               w = fn1(n0_l, 2) && p2_k;

               for (; a; a += 1) {
                  n0_j = v_j;
                  n0_k = v_k;
                  n0_l = v_l;
               }
            }
         }
      }
   }

   return p2_j;
}

unsigned fn3(unsigned p1) {
   unsigned char r_j, r_k, r_l;

   if (fn2(p1, r_j, r_k, r_l, 0, q00), p1)
      ;

   return p1;
}

int main() {
   return 0;
}
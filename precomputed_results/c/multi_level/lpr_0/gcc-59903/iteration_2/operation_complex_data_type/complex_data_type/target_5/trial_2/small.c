char fn1(unsigned p1, int p2) {
  return p1 > p2 ? p1 : p1 << p2;
}

int m[4];
unsigned char q00;
unsigned char q01;
unsigned char q02;
unsigned char q03;
unsigned char q04;
unsigned char q05;
unsigned char q06;
unsigned char q10;
unsigned char q11;
unsigned char q12;
unsigned char q13;
unsigned char q14;
unsigned char q15;
unsigned char q16;
unsigned char q20;
unsigned char q21;
unsigned char q22;
unsigned char q23;
unsigned char q24;
unsigned char q25;
unsigned char q26;
unsigned char q30;
unsigned char q31;
unsigned char q32;
unsigned char q33;
unsigned char q34;
unsigned char q35;
unsigned char q36;
unsigned char q40;
unsigned char q41;
unsigned char q42;
unsigned char q43;
unsigned char q44;
unsigned char q45;
unsigned char q46;
unsigned char q50;
unsigned char q51;
unsigned char q52;
unsigned char q53;
unsigned char q54;
unsigned char q55;
unsigned char q56;
unsigned char q60;
unsigned char q61;
unsigned char q62;
unsigned char q63;
unsigned char q64;
unsigned char q65;
unsigned char q66;

int n[2][3];
unsigned m[4];

int fn2(int p1, int j, int k, int l, unsigned p3, short p4) {
  int v_j;
  v_j = 0x15L;
  int w;
  int a;
  if (p4 ^ -5L)
    ;
  else
    v_j = n[1][0];
  for (; w; w += 1)
    for (p3 = 0; p3 <= 39; ++p3)
      for (j = 0; j <= 2; j += 1) {
        n[0][0] = v_j;
        n[0][1] = 5L;
        if (!n[0][0])
          ;
        else {
          w = fn1(n[0][2], 2) && k;
          for (; a; a += 4)
            n[0][0] = v_j;
          n[0][2] = m[j];
        }
      }
  return p2;
}

unsigned fn3(unsigned p1) {
  unsigned char q[7][7];
  int r_j;
  int r_k;
  int r_l;
  if (fn2(p1, r_j, r_k, r_l, 0, q[0][0]), p1)
    ;
  return p1;
}
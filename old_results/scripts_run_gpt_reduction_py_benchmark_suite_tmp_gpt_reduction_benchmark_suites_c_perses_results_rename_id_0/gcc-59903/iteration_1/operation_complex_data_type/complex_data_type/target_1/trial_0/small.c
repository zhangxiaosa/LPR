char fn1(unsigned p1, int p2) {
	return p1 > p2 ? p1 : p1 << p2;
}

int n0_j;
int n0_k;
int n0_l;
int n1_j;
int n1_k;
int n1_l;

unsigned m0;
unsigned m1;
unsigned m2;
unsigned m3;

struct i {
  int j;
  int k;
  int l;
};

unsigned m[4] = {m0, m1, m2, m3};
struct i n[2] = { { n0_j, n0_k, n0_l }, { n1_j, n1_k, n1_l } };

struct i fn2(int p1, struct i p2, unsigned p3, short p4) {
  struct i v = {0x15L, -5L};
  int w;
  int a;
  if (p4 ^ v_k)
    ;
  else
    v = n[1];
  for (; w; w += 1)
    for (p3 = 0; p3 <= 39; ++p3)
      for (p2.j = 0; p2.j <= 2; p2.j += 1) {
        n[0] = v;
        v.l = m[p2.j];
        if (!n[0].j)
          ;
        else {
          w = fn1(n[0].l, 2) && p2.k;
          for (; a; a += 4)
            n[0] = v;
        }
      }
  return p2;
}

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

unsigned char q[7][7] = {{q00, q01, q02, q03, q04, q05, q06},
                          {q10, q11, q12, q13, q14, q15, q16},
                          {q20, q21, q22, q23, q24, q25, q26},
                          {q30, q31, q32, q33, q34, q35, q36},
                          {q40, q41, q42, q43, q44, q45, q46},
                          {q50, q51, q52, q53, q54, q55, q56},
                          {q60, q61, q62, q63, q64, q65, q66}};

unsigned fn3(p1) {
  struct i r;
  unsigned s;
  if (fn2(p1, r, s, q[0][0]), p1)
    ;
  return p1;
}

int main() {}

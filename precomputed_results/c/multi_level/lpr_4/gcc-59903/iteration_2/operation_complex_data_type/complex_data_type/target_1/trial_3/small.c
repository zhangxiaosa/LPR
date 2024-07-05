unsigned m[4];

int n_j_0;
int n_k_0;
int n_l_0;

int n_j_1;
int n_k_1;
int n_l_1;

char fn1(unsigned p1, int p2) { return p1 > p2 ? p1 : p1 << p2; }

int v_j;
int v_k;
int v_l;

int w;
int a;

struct i {
  int j;
  int k;
  int l;
};

int fn2(int p1, int p2_j, int p2_k, int p2_l, unsigned p3, short p4) {
  v_j = 0x15L;
  v_k = -5L;
  v_l = 0;

  if (p4 ^ v_k)
    ;
  else {
    n_j_0 = n_j_1;
    n_k_0 = n_k_1;
    n_l_0 = n_l_1;
  }

  for (; w; w += 1)
    for (p3 = 0; p3 <= 39; ++p3)
      for (p2_j = 0; p2_j <= 2; p2_j += 1) {
        n_j_1 = v_j;
        n_k_1 = v_k;
        n_l_1 = v_l;

        v_l = m[p2_j];

        if (!n_j_1)
          ;
        else {
          w = fn1(n_l_1, 2) && p2_k;
          for (; a; a += 1)
            n_j_1 = v_j;
        }
      }

  return p2_j;
}

unsigned char q_0_0;
unsigned char q_0_1;
unsigned char q_0_2;
unsigned char q_0_3;
unsigned char q_0_4;
unsigned char q_0_5;
unsigned char q_0_6;
unsigned char q_1_0;
unsigned char q_1_1;
unsigned char q_1_2;
unsigned char q_1_3;
unsigned char q_1_4;
unsigned char q_1_5;
unsigned char q_1_6;

unsigned fn3(p1) {
  unsigned char q[7][7];
  q_0_0 = q[0][0];

  if (fn2(p1, n_j_0, n_k_0, n_l_0, 0, q_0_0), p1)
    ;
  return p1;
}

int main() {}

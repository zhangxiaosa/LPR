void fn1(unsigned p1, int p2) { printf("checksum = %X\n", p1); }

unsigned j;
void fn4(unsigned p1, char *p2, int p3) { j = p1; }

int ab; // Previously part of struct p
signed q; // Previously part of struct p

unsigned u;

unsigned p_ab = 0x1C87E74F;
signed p_q = 816;

int main() {
  int i;
  int b = 0;

  int a_ab = 8L;
  signed a_q = 666;

  signed p2;
  
  for (p2 = 0; p2 >= 0; p2 -= 1) {
    for (; u <= 1; u += 1) {
      ab = p_ab;
      q = p_q;

      unsigned v_q = q;
      struct p v = {ab, q};

      struct p a = v;
      v = a;
    }
  }

  for (i = 0; i < 1; i++)
    fn4(v.q, "g_217[i].f1", b);

  fn1(j, b);

  return 0;
}
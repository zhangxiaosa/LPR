int ab;
signed q;
int u;
int v_ab[1];
signed v_q[1];
int w_ab;
signed w_q;
int a_ab;
signed a_q;
int j;

ab = 0x1C87E74FL;
q = 816;
u = 0;
v_ab[0] = ab;
v_q[0] = q;
w_ab = ab;
w_q = q;

a_ab = 8L;
a_q = 666;

for (; u <= 1; u += 1) {
  a_ab = v_ab[0] = w_ab;
  a_q = v_q[0] = w_q;
}

j = v_q[0];

printf("checksum = %X\n", j);
return 0;
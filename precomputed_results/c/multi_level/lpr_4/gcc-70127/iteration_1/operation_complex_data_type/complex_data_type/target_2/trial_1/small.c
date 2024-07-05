unsigned int u;

unsigned int v_ab;
unsigned int v_q;

struct p w = {0x1C87E74F, 816};

int main() {
  struct p a = {0x1C87E74F, 666};

  for (; u <= 1; u += 1) {
    a = v[0] = w;
    v[0] = a;
  }

  printf("checksum = %X\n", v_q);

  return 0;
}
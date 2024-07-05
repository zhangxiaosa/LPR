
#define TABLE_SIZE 65536

c fn3_table[TABLE_SIZE];

void fn3_init() {
  for (int i = 0; i < TABLE_SIZE; i++) {
    fn3_table[i] = i >= 0xFFFF;
  }
}

c fn3(c p1, c p2) {
  return fn3_table[p1 & 0xFFFF] && fn3_table[p2 & 0xFFFF];
}

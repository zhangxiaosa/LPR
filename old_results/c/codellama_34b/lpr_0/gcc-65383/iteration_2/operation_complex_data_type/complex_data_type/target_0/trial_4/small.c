
int32_t g = 0; // initial value
int16_t g_lo = g & 0xFFFF; // low 16 bits
int16_t g_hi = (g >> 16) & 0xFFFF; // high 16 bits

int16_t h2_0 = 0x92A1;
int16_t h2_0_lo = h2_0 & 0xFFFF; // low 16 bits
int16_t h2_0_hi = (h2_0 >> 16) & 0xFFFF; // high 16 bits

int32_t r[5] = {0}; // initial values
int32_t r_0 = r[0]; // first element
int32_t r_1 = r[1]; // second element
int32_t r_2 = r[2]; // third element
int32_t r_3 = r[3]; // fourth element
int32_t r_4 = r[4]; // fifth element

int32_t fn2() {
  for (;;) {
    // body of the function
  }
}

int main() {
  fn2();
}

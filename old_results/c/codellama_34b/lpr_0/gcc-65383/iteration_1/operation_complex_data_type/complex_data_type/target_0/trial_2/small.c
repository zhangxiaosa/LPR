
uint32_t fn2() {
  uint32_t loop_counter = 0;
  uint32_t r[5];
  uint32_t h2_value = 0x92A1D2CD;
  uint32_t g_value = 0;
  uint32_t r_value = 0;

  for (loop_counter = 0; loop_counter < 5; loop_counter++) {
    r_value = r[loop_counter];
    if (h2_value)
      return 0xC3;
    g_value = r_value;
  }

  return g_value;
}

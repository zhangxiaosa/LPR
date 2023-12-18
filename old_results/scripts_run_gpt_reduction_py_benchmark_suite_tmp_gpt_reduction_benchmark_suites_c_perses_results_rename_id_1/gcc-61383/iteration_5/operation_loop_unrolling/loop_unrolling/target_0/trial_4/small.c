int fn3(int p1, int p2) {
  if (p1 && p2 && p1 > 2147483647 - p2)
    return p1;
  else if (p1 < 0 && p2 < 0 && p1)
    return p1;
  else
    return p1 + p2;
}

unsigned m;
int o;

int main() {
  unsigned loopCount = m;

  // Unrolled loop iteration 0
  int temp_0 = o == 0 ? o : o % o;
  if (o <= 0xE3L)
    ;
  else if (temp_0)
    return m;

  // Unrolled loop iteration 1
  int temp_1 = fn3(m, 3);
  int temp_1_modified = o == 0 ? o : o % o;
  if (o <= 0xE3L)
    ;
  else if (temp_1_modified)
    return m;

  // Unrolled loop iteration 2
  int temp_2 = fn3(temp_1, 3);
  int temp_2_modified = o == 0 ? o : o % o;
  if (o <= 0xE3L)
    ;
  else if (temp_2_modified)
    return m;

  // Unrolled loop iteration 3
  int temp_3 = fn3(temp_2, 3);
  int temp_3_modified = o == 0 ? o : o % o;
  if (o <= 0xE3L)
    ;
  else if (temp_3_modified)
    return m;

  // Unrolled loop iteration 4
  int temp_4 = fn3(temp_3, 3);
  int temp_4_modified = o == 0 ? o : o % o;
  if (o <= 0xE3L)
    ;
  else if (temp_4_modified)
    return m;

  // Unrolled loop iteration 5
  int temp_5 = fn3(temp_4, 3);
  int temp_5_modified = o == 0 ? o : o % o;
  if (o <= 0xE3L)
    ;
  else if (temp_5_modified)
    return m;

  // Unrolled loop iteration 6
  int temp_6 = fn3(temp_5, 3);
  int temp_6_modified = o == 0 ? o : o % o;
  if (o <= 0xE3L)
    ;
  else if (temp_6_modified)
    return m;

  // Unrolled loop iteration 7
  int temp_7 = fn3(temp_6, 3);
  int temp_7_modified = o == 0 ? o : o % o;
  if (o <= 0xE3L)
    ;
  else if (temp_7_modified)
    return m;

  // Unrolled loop iteration 8
  int temp_8 = fn3(temp_7, 3);
  int temp_8_modified = o == 0 ? o : o % o;
  if (o <= 0xE3L)
    ;
  else if (temp_8_modified)
    return m;

  // Unrolled loop iteration 9
  int temp_9 = fn3(temp_8, 3);
  int temp_9_modified = o == 0 ? o : o % o;
  if (o <= 0xE3L)
    ;
  else if (temp_9_modified)
    return m;

  // Unrolled loop iteration 10
  int temp_10 = fn3(temp_9, 3);
  int temp_10_modified = o == 0 ? o : o % o;
  if (o <= 0xE3L)
    ;
  else if (temp_10_modified)
    return m;

  // Unrolled loop iteration 11
  int temp_11 = fn3(temp_10, 3);
  int temp_11_modified = o == 0 ? o : o % o;
  if (o <= 0xE3L)
    ;
  else if (temp_11_modified)
    return m;

  // Return m after loop unrolling
  return m;
}
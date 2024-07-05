
for (;;) {
  // Original loop body
  for (; l; l++)
    for (k = 0; k >= -27; k = k - 6)
      p1 = o - p1;

  // Duplicate loop body
  for (; l; l++)
    for (k = 0; k >= -27; k = k - 6)
      p1 = o - p1;

  // Duplicate loop body again
  for (; l; l++)
    for (k = 0; k >= -27; k = k - 6)
      p1 = o - p1;
}


// Declare a 1D array of size 5 * 8
int m_flat[40];

// Initialize the 1D array with the values of the 2D array
for (int i = 0; i < 5; i++) {
  for (int j = 0; j < 8; j++) {
    m_flat[i * 8 + j] = m[i][j];
  }
}

// Use the 1D array instead of the 2D array in the code
for (int i = 0; i < 5; i++) {
  for (int j = 0; j < 8; j++) {
    p1 = o - p1;
  }
}

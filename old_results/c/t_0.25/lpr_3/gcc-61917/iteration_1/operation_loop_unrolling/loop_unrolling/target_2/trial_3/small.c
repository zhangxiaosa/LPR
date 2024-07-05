unsigned l;
volatile unsigned m[5][8];

unsigned fn3() {
  int k;
  
  for (; l; l++) {
    // Iteration 1
    for (k = 0; k >= -27; k = k - 6) {
      // Loop body
    }
    
    // Iteration 2
    for (k = 0; k >= -27; k = k - 6) {
      // Loop body
    }
    
    // Iteration 3
    for (k = 0; k >= -27; k = k - 6) {
      // Loop body
    }
    
    // Iteration 4
    for (k = 0; k >= -27; k = k - 6) {
      // Loop body
    }
    
    // Iteration 5
    for (k = 0; k >= -27; k = k - 6) {
      // Loop body
    }
    
    // Check condition
    if (m[2][5]) {
      break;
    }
  }
}
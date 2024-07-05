int f;
signed g;

int main() {
  int j = 0x24F96B7B;

  // Unrolled loop
  for (; j >= 4; j -= 4) {
    // Loop body repeated 4 times
    ;
    ;
    ;
    ;
  }

  // Handle remaining iterations
  for (; j; --j)
    ;

  return 0;
}
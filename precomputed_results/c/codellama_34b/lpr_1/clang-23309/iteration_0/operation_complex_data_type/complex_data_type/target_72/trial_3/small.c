
int main() {
  int ap = 0;
  short p1 = 0;
  short p2 = 0;
  u_char p76 = 0;

  printf("Enter two numbers: ");
  scanf("%d%d", &p1, &p2);

  // Perform the calculation using the fn13 function
  u_char temp = fn13(p1, p2);

  // Update the p76 variable with the result of the calculation
  p76 = temp;

  printf("Result: %d\n", p76);

  return 0;
}

// The fn13 function takes in two numbers and performs a calculation on them
u_char fn13(short p1, short p2) {
  short result = 0;

  // Perform the calculation
  result = p1 - p2;

  return result;
}

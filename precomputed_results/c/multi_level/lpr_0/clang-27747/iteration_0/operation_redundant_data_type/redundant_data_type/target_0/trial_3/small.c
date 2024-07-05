#include <stdio.h>

// Function declaration
int addNumbers(int a, int b);

int main()
{
    int n1, n2, sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    // Function call
    sum = addNumbers(n1, n2);

    printf("Sum = %d", sum);

    return 0;
}

// Function definition
double addNumbers(int a, int b)
{
    double result;
    result = a + b;
    return result;
}
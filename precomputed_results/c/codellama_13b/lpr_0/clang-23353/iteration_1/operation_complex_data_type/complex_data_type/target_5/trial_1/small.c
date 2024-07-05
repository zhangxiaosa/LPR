
#include <iostream>

using namespace std;

// Function to calculate the product of two characters
char fn1(char p1, char p2) {
    return p1 * p2;
}

// Function to calculate the product of a character and an integer
int fn2(int p3) {
    for (p3 = 6; p3 != -7; p3--) {
        j ^= fn1(p3, i) && 1L;
    }
    return 0;
}

int main() {
    // Variables for the program
    char p1;
    char p2;
    int p3;
    int i;
    int j;

    // Prompt the user to enter the values for p1 and p2
    cin >> p1 >> p2;

    // Call the function to calculate the product of p1 and p2
    fn1(p1, p2);

    // Call the function to calculate the product of p3 and i
    fn2(p3);

    // Print the result
    cout << "The product of p1 and p2 is: " << p1 * p2 << endl;
    cout << "The product of p3 and i is: " << p3 * i << endl;

    return 0;
}

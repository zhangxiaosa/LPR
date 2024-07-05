#include <cmath>
#include <iostream>

int main() {
    const int n = 10;
    int sum = 0;

    // Loop unrolled section for (0..n)
    // Unrolled iteration 0
    sum += sqrt(0);

    // Unrolled iteration 1
    sum += sqrt(1);

    // Unrolled iteration 2
    sum += sqrt(2);

    // Replace n with the actual number of iterations in the unrolled section

    int i = 3;
    while (i < n) {
        sum += sqrt(i);
        i++;
    }

    std::cout << "Sum: " << sum << std::endl;
    return 0;
}
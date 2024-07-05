
#include <iostream>
#include <unordered_map>

int main() {
    // Initialize the hash table
    std::unordered_map<int, int> h;

    // Insert values into the hash table
    h[0x92A1D2CD] = 1;
    h[0x92A1D2C5] = 2;
    h[0x92A1D2CF] = 3;

    // Find the desired value in the hash table
    int g = h[0x92A1D2CD];

    // Print the result
    std::cout << "g = " << g << std::endl;

    return 0;
}

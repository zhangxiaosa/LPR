#include <iostream>
#include <vector>

typedef void (*ptrFunc)();

int findLargestDivisor(int n)
{
    for (int i = n / 2; i >= 2; --i) {
        if (n % i == 0) {
            return i;
        }
    }

    return 1;
}

void foo()
{
    std::cout << "Hello from foo!" << std::endl;
}

void bar()
{
    std::cout << "Hello from bar!" << std::endl;
}

int main()
{
    std::vector<ptrFunc> funcs;

    funcs.push_back(&foo);
    funcs.push_back(&bar);

    int n = 23456;
    int largestDivisor = findLargestDivisor(n);

    if (largestDivisor > 1) {
        funcs[largestDivisor % 2]();
        return 0;
    }

    return 1;
}
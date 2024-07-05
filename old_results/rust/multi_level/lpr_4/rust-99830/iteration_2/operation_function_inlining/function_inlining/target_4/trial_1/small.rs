#include <algorithm>
#include <iostream>
#include <cmath>

class d {
    uint32_t value;

public:
    d(uint32_t val) : value(val) {}

    d operator+(const d& other) {
        d result(*this);
        asm volatile (
            "add %0, %1"
            : "+r"(result.value)
            : "r"(other.value)
            : "cc"
         );
         return result;
    }

    void operator*=(const d& other) {
        asm volatile (
            "mul edx\n"
            "div %[g]\n"
            :"=a"(value)
            :"0"(value), [g]"g"(g)
            :"edx", "cc"
        );
    }

    d pow(uint32_t exp) {
        d base(*this);
        base *= base;
        exp >>= 1;
        d acc(base);
        d result(acc);
        result *= base;
        if (exp == 1) {
            acc *= result;
        }
        return acc;
    }

private:
    static const uint32_t g = 1'000'000'000;
};

int main() {
    d c(1);
    for (int _e : Primes::all()) {
        if (_e >= 4) break;
        int exp = 2 * (4 / _e);
        d base(_e);

        base *= base;
        exp >>= 1;
        d acc(base);
        exp >>= 1;
        base *= base;
        if (exp == 1) {
            acc *= base;
        }
        c *= acc + d(1);
    }
    assert(c.value == 650);
    return 0;
}
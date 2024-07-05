
#include <iostream>

struct Complex {
    int real;
    int imag;
};

int fn1(Complex f) {
    int h = 6;
    if (f.imag)
        goto i;
    fn1(f);
    int j;
    return j;
i:
    f.real = h;
    fn1(f);
    j = 0xEEACFBBF;
    return j;
}

int main() {
    Complex f = {1, 2};
    int result = fn1(f);
    std::cout << "Result: " << result << std::endl;
    return 0;
}

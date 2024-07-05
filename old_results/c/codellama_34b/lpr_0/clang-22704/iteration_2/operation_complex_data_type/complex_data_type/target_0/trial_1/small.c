
#include <iostream>

int main() {
    int d_int = 0;
    int fn1_result = fn1(d_int);
    std::cout << "fn1_result: " << fn1_result << std::endl;
    return 0;
}

int fn1(int& d_int) {
    if (d_int) {
        goto jump;
    }
    fn1(d_int);
    return 0xEEACFBBFL;
jump:
    d_int = 6L;
    fn1(d_int);
    return 0xEEACFBBFL;
}

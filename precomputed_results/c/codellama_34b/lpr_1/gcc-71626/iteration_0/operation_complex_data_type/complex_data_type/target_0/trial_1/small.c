
#include <stdint.h>

// Define the complex data type
typedef struct {
    long real;
    long imag;
} complex;

// Function to compute the square of a complex number
complex sqr(complex z) {
    complex result;
    result.real = z.real * z.real - z.imag * z.imag;
    result.imag = 2 * z.real * z.imag;
    return result;
}

// Function to compute the absolute value of a complex number
double abs(complex z) {
    return sqrt(z.real * z.real + z.imag * z.imag);
}

// Function to compute the conjugate of a complex number
complex conj(complex z) {
    complex result;
    result.real = z.real;
    result.imag = -z.imag;
    return result;
}

// Function to compute the argument of a complex number
double arg(complex z) {
    return atan2(z.imag, z.real);
}

int main() {
    complex z = {1.0, 1.0};
    complex z_sqr = sqr(z);
    double z_abs = abs(z);
    complex z_conj = conj(z);
    double z_arg = arg(z);
    printf("z^2 = (%f, %f)\n", z_sqr.real, z_sqr.imag);
    printf("|z| = %f\n", z_abs);
    printf("conj(z) = (%f, %f)\n", z_conj.real, z_conj.imag);
    printf("arg(z) = %f\n", z_arg);
    return 0;
}

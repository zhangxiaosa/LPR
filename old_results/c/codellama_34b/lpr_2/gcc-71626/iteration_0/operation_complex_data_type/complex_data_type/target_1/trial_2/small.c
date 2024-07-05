
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

// Define a struct to represent a complex number
typedef struct {
    long real;
    long imag;
} complex;

// Define a function to create a complex number
complex create_complex(long real, long imag) {
    complex c;
    c.real = real;
    c.imag = imag;
    return c;
}

// Define a function to add two complex numbers
complex add_complex(complex a, complex b) {
    complex c;
    c.real = a.real + b.real;
    c.imag = a.imag + b.imag;
    return c;
}

// Define a function to multiply two complex numbers
complex multiply_complex(complex a, complex b) {
    complex c;
    c.real = a.real * b.real - a.imag * b.imag;
    c.imag = a.real * b.imag + a.imag * b.real;
    return c;
}

int main() {
    // Create two complex numbers
    complex a = create_complex(1, 2);
    complex b = create_complex(3, 4);

    // Add the two complex numbers
    complex c = add_complex(a, b);
    printf("a + b = %ld + %ldi\n", c.real, c.imag);

    // Multiply the two complex numbers
    complex d = multiply_complex(a, b);
    printf("a * b = %ld + %ldi\n", d.real, d.imag);

    return 0;
}

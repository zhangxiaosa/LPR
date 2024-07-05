
#include <stdio.h>
#include <stdlib.h>

// Decomposition of struct c into primary data types
int d_int;
int e_int;
int g_int;
int h_int;

// Decomposition of struct c into primary data types
int l_d_int;
int l_e_int;
int l_g_int;
int l_h_int;

int main() {
    // Initialize struct c variables
    d_int = 18;
    e_int = 6738;
    g_int = 165;
    h_int = 0;

    // Initialize struct c variables
    l_d_int = 24;
    l_e_int = 6738;
    l_g_int = 165;
    l_h_int = 0;

    // Assign values to struct c variables
    l_d_int = d_int;
    l_e_int = e_int;
    l_g_int = g_int;
    l_h_int = h_int;

    // Calculate values for struct c variables
    l_h_int = l_e_int && l_d_int;
    l_g_int = l_d_int | -(l_g_int && l_d_int) - l_h_int;

    // Print values of struct c variables
    printf("d: %d\n", l_d_int);
    printf("e: %d\n", l_e_int);
    printf("g: %d\n", l_g_int);
    printf("h: %d\n", l_h_int);

    return 0;
}


#include <stdio.h>

int r;
static int s_sign = -5;
int s_unsigned = 5;
int u;

int main() {
    int ae = s_unsigned;
    r = s_unsigned % (~s_sign / ae);
    return 0;
}


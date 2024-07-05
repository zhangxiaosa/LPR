
<SYS>

#include <stdio.h>

int d;
int e;

int fn1() {
    if (e) {
        goto i;
    }
    fn1();
    return 0xEEACFBBFL;
i:
    d = 6L;
    fn1();
    return 0xEEACFBBFL;
}

int main() {
    int result;
    int flag;

    flag = 0;
    while (flag == 0) {
        if (e == 0) {
            flag = 1;
            d = 6L;
            result = 0xEEACFBBFL;
        } else {
            result = 0xEEACFBBFL;
        }
    }

    return result;
}

</SYS>

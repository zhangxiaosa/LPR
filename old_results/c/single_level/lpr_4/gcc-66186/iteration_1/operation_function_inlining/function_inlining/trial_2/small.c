#include <stdio.h>

signed g;
signed h;

unsigned fn4(int, unsigned short, unsigned short, unsigned, unsigned short);

int fn5() {
    int s = 0x57638FF4L;
    unsigned u = 0x30A04A8F;
    {
        int ad = -7L;
        signed ae = 0xA3L;
        {
            short ak[8];
            unsigned short p2;
            unsigned p4;

            for (p2 = 0; p2 <= 7; p2 += 1) {
                for (p4 = 0; p4 <= 7; p4 += 1) {
                    if (h < 0) {
                        p4 = 8;    // Breaking out of the loop
                        break;
                    }
                    if (ak[ad])
                        break;
                }
                if (p4 < 8)
                    break;
            }

            {
                if (fn4(ad, 4294967287UL, ad, g, g))
                    ;
                return ae;
            }
        }
    }
}

unsigned fn4(int p1, unsigned short p2, unsigned short p3, unsigned p4,
              unsigned short p5) {
    short ak[8];
    for (p2 = 0; p2 <= 7; p2 += 1)
        for (p4 = 0; p4 <= 7; p4 += 1)
            if (h < 0)
                for (p4 = 0; p4 <= 7; p4 += 1)
                    if (ak[p3])
                        break;
    return g;
}

int main() {
    fn5();
}
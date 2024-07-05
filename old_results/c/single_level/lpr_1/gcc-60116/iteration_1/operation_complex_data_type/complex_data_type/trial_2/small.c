#include <stdio.h>

void fn1(unsigned p1, int p2) 
{ 
    printf("checksum = %X\n", p1); 
}

short fn2(short p1, short p2) 
{ 
    return p1 && p2 ? p1 : p1 % p2; 
}

long fn3(long p1, long p2) 
{ 
    return p2; 
}

char fn4(char p1, char p2) 
{ 
    return p1; 
}

char fn5(char p1, int p2) 
{ 
    return p2; 
}

unsigned fn6(unsigned p1, unsigned p2) 
{ 
    return p2; 
}

unsigned fn7(unsigned p1, unsigned p2) 
{ 
    return p1; 
}

long long fn8(long p1, long long p2) 
{ 
    return p1 + p2; 
}

unsigned q;

void fn11(long p1, char *p2, int p3) 
{ 
    q = p1; 
}

int v;

unsigned w = 0xDC6F3D13L;

long long ag[4];

short ah;

char ai;

long aj;

long ak;

unsigned al;

int am = 0x41AEA787L;

int ao;

unsigned ap;

int aq;

long fn12() 
{
    char as = 4UL;
    short at = 1L;
    int au_000;
    int au_001;
    int au_002;
    int au_003;
    int au_004;
    int au_010;
    int au_011;
    int au_012;
    int au_013;
    int au_014;
    int au_100;
    int au_101;
    int au_102;
    int au_103;
    int au_104;
    int au_110;
    int au_111;
    int au_112;
    int au_113;
    int au_114;
    int au_200;
    int au_201;
    int au_202;
    int au_203;
    int au_204;
    int au_210;
    int au_211;
    int au_212;
    int au_213;
    int au_214;
    int au_300;
    int au_301;
    int au_302;
    int au_303;
    int au_304;
    int au_310;
    int au_311;
    int au_312;
    int au_313;
    int au_314;
    int au_400;
    int au_401;
    int au_402;
    int au_403;
    int au_404;

    for (ak = 0;;) 
    {
        for (ah = 0; ah <= 3; ah += 1) 
            if (w >= (fn7(as, fn6(aq, fn5(ai, au_414 = fn8(~fn4(fn3(aj, fn2(ap, at)) != 0, 0), ak) && 0x57L))) > 2)) 
            {
                v = am;
                ag[3] = au_414;
            }
            else
                ao = au_414;
        return al;
    }
}

int main() 
{
    int av = 0;
    fn12();
    fn11(v, "g_3", av);
    fn1(q, av);
    return 0;
}
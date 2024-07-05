typedef unsigned d;

 d fn1(d p1, d p2) { return p1 + p2; }

 d fn2(d p1, d p2) { return p1 - p2; }

 unsigned i;

 d fn3(p1) {
   d m = 0x809C;
   d n;

   // Unrolled loop
   n = 0; 
   d o1 = 0xE576516E;
   if (i) 
     printf("l_1179=%lld\n", (long long)0);
   p1 = fn2(0x60781BCD >= m ^ 4294967287UL, o1);

   n = fn1(n, 8);
   d o2 = 0xE576516E;
   if (i) 
     printf("l_1179=%lld\n", (long long)0);
   p1 = fn2(0x60781BCD >= m ^ 4294967287UL, o2);

   n = fn1(n, 8);
   d o3 = 0xE576516E;
   if (i) 
     printf("l_1179=%lld\n", (long long)0);
   p1 = fn2(0x60781BCD >= m ^ 4294967287UL, o3);

   n = fn1(n, 8);
   d o4 = 0xE576516E;
   if (i) 
     printf("l_1179=%lld\n", (long long)0);
   p1 = fn2(0x60781BCD >= m ^ 4294967287UL, o4);

   n = fn1(n, 8);
   d o5 = 0xE576516E;
   if (i) 
     printf("l_1179=%lld\n", (long long)0);
   p1 = fn2(0x60781BCD >= m ^ 4294967287UL, o5);

   n = fn1(n, 8);
   d o6 = 0xE576516E;
   if (i) 
     printf("l_1179=%lld\n", (long long)0);
   p1 = fn2(0x60781BCD >= m ^ 4294967287UL, o6);

   n = fn1(n, 8);
   d o7 = 0xE576516E;
   if (i) 
     printf("l_1179=%lld\n", (long long)0);
   p1 = fn2(0x60781BCD >= m ^ 4294967287UL, o7);

   n = fn1(n, 8);
   d o8 = 0xE576516E;
   if (i) 
     printf("l_1179=%lld\n", (long long)0);
   p1 = fn2(0x60781BCD >= m ^ 4294967287UL, o8);

   return p1;
 }

 int main() {
   if (fn3(1))
     ;
 }
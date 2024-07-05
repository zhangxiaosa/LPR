short fn1() {
   int j = 0x24F96B7B;
   unsigned k;
   while (1) {
      for (;; j -= 16) {
         k = k >> 1;
         if (0) {  // Replaced 'g' with '0'
            k = k << j;
            goto q;
         }
      }
   q:;
   }
}

int main() {}

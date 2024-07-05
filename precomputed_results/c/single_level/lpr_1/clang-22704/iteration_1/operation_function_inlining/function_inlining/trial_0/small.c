int d;
int e;

int main() {
   int h = 6L;
   if (e)
      goto i;

   // Inlined function body of fn1()
   while (1) {
      if (e)
         goto i;

      int h = 6L;

      goto end;

   i:
      d = h;

   end:
      continue;
   }

   return 0;
}
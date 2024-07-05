int v = 0;
short w = 3;
short ac = 1;

while (w) {
  int an;
  if (an = 250) {
    if (!ac) an = w;
    if ((((short)0xBCD1 - (short)(1 - an)) - ac) & 1)
      v = 1;
  }
  w -= 1;
}

printf("checksum = %X\n", v);
return 0;
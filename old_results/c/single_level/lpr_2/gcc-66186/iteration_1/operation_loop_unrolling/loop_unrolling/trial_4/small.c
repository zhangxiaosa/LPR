typedef short b;

typedef int c;

typedef unsigned short e;

typedef unsigned f;



c g;

c h;



f fn4(c, e, e, f, e);



e fn2(signed p1, e p2, f p3) {

  if (fn4(7L, 4294967287UL, -7L, g, p2))

    ;

  return 0;

}



f fn4(c p1, e p2, e p3, f p4, e p5) {

  b ak[8];

  if (h < 0) {

    if (ak[p3])

      goto loop_end_1;

    if (ak[p3+1])

      goto loop_end_2;

    if (ak[p3+2])

      goto loop_end_3;

    if (ak[p3+3])

      goto loop_end_4;

    if (ak[p3+4])

      goto loop_end_5;

    if (ak[p3+5])

      goto loop_end_6;

    if (ak[p3+6])

      goto loop_end_7;

    if (ak[p3+7])

      goto loop_end_8;

  }



loop_end_8:

  p4 += 1;

loop_end_7:

  p4 += 1;

loop_end_6:

  p4 += 1;

loop_end_5:

  p4 += 1;

loop_end_4:

  p4 += 1;

loop_end_3:

  p4 += 1;

loop_end_2:

  p4 += 1;

loop_end_1:

  p4 += 1;



  return g;

}



c fn5() {

  c s = 0x57638FF4L;

  fn2(g, s, g);

  return 1L;

}



int main() {

  fn5();

}
#include <stdio.h>

short fn2(short p1, short p2) { return p1 && p2 ? p1 : p1 % p2; }
long fn3(long p1, long p2) { return p2; }
char fn4(char p1, char p2) { return p1; }
char fn5(char p1, int p2) { return p2; }
unsigned fn6(unsigned p1, unsigned p2) { return p2; }
unsigned fn7(unsigned p1, unsigned p2) { return p1; }
long long fn8(long p1, long long p2) { return p1 + p2; }

unsigned q;
int v;
unsigned w = 0xDC6F3D13L;
long long ag0, ag1, ag2, ag3;
short ah;
char ai;
long aj;
long ak;
int am = 0x41AEA787L;
char an;
int ao;
unsigned ap;
int aq;

int main() {
  char as = 4UL;
  short at = 1L;
  int au0, au1, au2, au3, au4, au5, au6, au7, au8, au9, au10, au11, au12, au13, au14, au15, au16, au17, au18, au19, au20, au21, au22, au23, au24, au25, au26, au27, au28, au29, au30, au31, au32, au33, au34, au35, au36, au37, au38, au39, au40, au41, au42, au43, au44, au45, au46, au47, au48, au49;
  int au50, au51, au52, au53, au54, au55, au56, au57, au58, au59, au60, au61, au62, au63, au64, au65, au66, au67, au68, au69, au70, au71, au72, au73, au74, au75, au76, au77, au78, au79, au80, au81, au82, au83, au84, au85, au86, au87, au88, au89, au90, au91, au92, au93, au94, au95, au96, au97, au98, au99;
  int au100, au101, au102, au103, au104, au105, au106, au107, au108, au109, au110, au111, au112, au113, au114, au115, au116, au117, au118, au119, au120, au121, au122, au123, au124, au125, au126, au127, au128, au129, au130, au131, au132, au133, au134, au135, au136, au137, au138, au139, au140, au141, au142, au143, au144, au145, au146, au147, au148, au149;

  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1) {
      if (w >= (fn7(as, fn6(aq, fn5(ai, au5 = fn8(~fn4(fn3(aj, fn2(ap, at)) != 0, an), ak) && 0x57L))) > 2)) {
        v = am;
        ag3 = au5;
      } else {
        ao = au5;
      }
    }
    break;
  }

  q = v;
  printf("checksum = %X\n", q);
  return 0;
}
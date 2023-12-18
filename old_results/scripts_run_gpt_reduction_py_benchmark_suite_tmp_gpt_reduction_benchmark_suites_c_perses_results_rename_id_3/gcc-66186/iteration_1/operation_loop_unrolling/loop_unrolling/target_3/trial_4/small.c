#include <stdint.h>
int g;
int h;

unsigned fn4(int, uint16_t, uint16_t, unsigned, uint16_t);

int fn5() {
  int32_t p3 = 0x57638FF4;

#if UNROLL_FACTOR
	#if UNROLL_FACTOR > 0 && UNROLL_FACTOR <= 8
		#define OUTER_ITERATIONS UNROLL_FACTOR
	#else
		#define OUTER_ITERATIONS 8
	#endif
#else
	#define OUTER_ITERATIONS 8
#endif

#if UNROLL_FACTOR
	#if UNROLL_FACTOR > 0 && UNROLL_FACTOR <= 8
		#define INNER_ITERATIONS UNROLL_FACTOR
	#else
		#define INNER_ITERATIONS 8
	#endif
#else
	#define INNER_ITERATIONS 8
#endif

#if OUTER_UNROLL
#define OUTER_UNROLL_LOOP \
  if (h < 0) \
    for (p4 = 0; p4 <= (INNER_ITERATIONS - 1); p4 += 1) \
      if (ak[p3]) \
        break; \
  \
#else
#define OUTER_UNROLL_LOOP \
  for (p4 = 0; p4 <= (INNER_ITERATIONS - 1); p4 += 1) \
    if (h < 0 && ak[p3]) \
      break; \
  \
#endif

#if INNER_UNROLL
#define INNER_UNROLL_LOOP \
OUTER_UNROLL_LOOP
#else
#define INNER_UNROLL_LOOP \
  OUTER_UNROLL_LOOP
#endif

int32_t p1 = 0x9A5D;
int16_t ak[8];

#if OUTER_UNROLL
for (int i = 0; i < (OUTER_ITERATIONS - 1); ++i) {
  p2 = i;
  INNER_UNROLL_LOOP
}
#endif

p2 = OUTER_ITERATIONS - 1;
INNER_UNROLL_LOOP

return g;
}

int fn5() {
  int32_t p3 = 0x57638FF4;
  if (fn4(0x9A5D, g, p3, g, g))
    ;
  return 0xA3;
}

unsigned fn4(int p1, uint16_t p2, uint16_t p3, unsigned p4, uint16_t p5) {
  int16_t ak[8];

#if UNROLL_FACTOR
#define UNROLLED_LOOP \
fn4(p1, 0, p3, p4, p5); \
fn4(p1, 1, p3, p4, p5); \
fn4(p1, 2, p3, p4, p5); \
fn4(p1, 3, p3, p4, p5); \
fn4(p1, 4, p3, p4, p5); \
fn4(p1, 5, p3, p4, p5); \
fn4(p1, 6, p3, p4, p5); \
fn4(p1, 7, p3, p4, p5);
#else
#define UNROLLED_LOOP \
fn4(p1, 0, p3, p4, p5); \
fn4(p1, 1, p3, p4, p5); \
fn4(p1, 2, p3, p4, p5); \
fn4(p1, 3, p3, p4, p5); \
fn4(p1, 4, p3, p4, p5); \
fn4(p1, 5, p3, p4, p5); \
fn4(p1, 6, p3, p4, p5); \
fn4(p1, 7, p3, p4, p5);
#endif

#if UNROLL_FACTOR
for (int i = 0; i < (UNROLL_FACTOR - 1); ++i) {
  if (h < 0)
    UNROLLED_LOOP
}
#endif

if (h < 0)
  UNROLLED_LOOP

return g;
}

int main() {
  fn5();
}

#include <stdint.h>

struct c {
	int32_t d : 18;
	uint32_t e;
	uint32_t f;
	int32_t g;
	int32_t h;
};

struct c i;
struct c j;

int main() {
	struct c l = {24, 6738, 165};

	// Decomposed variables
	int32_t i_d;
	uint32_t i_e;
	uint32_t i_f;
	int32_t i_g;
	int32_t i_h;

	i_d = l.d;
	i_e = j.e;
	i_f = l.f;
	i_g = l.g;
	i_h = l.h;

	int n = i_h && i_d;

	i_g = i_d | -(i_f && i_d) - n;

	return 0;
}

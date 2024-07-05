#include<stdio.h>

typedef int c;
typedef unsigned f;
f j;
struct p {
	c ab;
	signed q : 22;
};

f u;
struct p v[1];
struct p w = {0x1C87E74FL, 816};

int main() {
	int i;
	struct p a = {8L, 666};
	
	// Unrolled loop
	i = 0;
	a = v[i] = w;
	v[i] = a;

	// Update loop variables
	u += 1;

	// Replicate loop body
	i = 1;
	a = v[i] = w;
	v[i] = a;

	// Update loop variables
	u += 1;

	// Replicate loop body
	i = 2;
	a = v[i] = w;
	v[i] = a;

	// Update loop variables
	u += 1;

	// ... repeat the loop body for desired number of iterations ...

	// Original code after the loop
	for (i = 0; i < 1; i++)
		j = v[i].q;

	printf("checksum = %X\n", j);
	
	return 0;
}
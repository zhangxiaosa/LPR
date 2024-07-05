void fn1(unsigned p1, int p2) {
	printf("checksum = %X\n", p1);
}

unsigned j;

// Decomposed structure variables
int p_ab;
signed p_q;

unsigned u;

// Decomposed array of structure
int v_ab[1];
signed v_q[1];

// Decomposed structure variable
int w_ab;
signed w_q;

int main() {
	int i;

	// Decomposed structure variable
	int a_ab;
	signed a_q;

	int p2;

	for (p2 = 0; p2 >= 0; p2 -= 1) {
		for (; u <= 1; u += 1) {
			// Assigning values to decomposed variables
			a_ab = 8L;
			a_q = 666;

			// Assigning values to decomposed array of structure
			v_ab[p2] = 0x1C87E74F;
			v_q[p2] = 816;

			// Assigning values to decomposed structure variable
			w_ab = 0x1C87E74F;
			w_q = 816;

			// Performing operations using decomposed variables
			a_ab = v_ab[p2] = w_ab;
			v_ab[p2] = a_ab;
			v_q[p2] = w_q;
		}
	}

	for (i = 0; i < 1; i++) {
		// Assigning value to decomposed variable
		j = v_q[i];
	}

	// Calling fn1 function with decomposed variables
	fn1(j, 0);

	return 0;
}
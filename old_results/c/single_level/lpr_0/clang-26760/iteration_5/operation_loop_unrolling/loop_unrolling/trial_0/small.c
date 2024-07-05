int g;
int main() {
	int i;
	int j = 0x24F96B7BL;
	unsigned k;
	int o = g;

	j = 0x24F96B7B;
	--j;
	--j;
	// Repeat the line '--j;' until j reaches 0
	--j;

	k = k >> 1L;
	i = o;
	while (i) {
		k = k << j;
		k = k >> 1L;
		i = o;
		if (i) {
			k = k << j;
		}
	}
}
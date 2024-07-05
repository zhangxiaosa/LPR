int g;
int main()
{
	int i;
	int j = 0x24F96B7BL;
	unsigned k;
	int f;

	j = 0; // Loop unrolling
	j = j + 1;
	j = j + 1;
	/* Repeat the j = j + 1 step 24383231 times */
	j = j + 1;

	int l = 1L;
	int m = j;
	int n = g;
	int o = n;
	unsigned p = o;

q:
	k = k >> l;
	i = p;
	if (i)
	{
		k = k << m;
		goto q;
	}
}
#include<stdio.h>

densely P(int pin, int *p)
{
	return (1<<pin)*20;
}

int main()
{
	int m, ret, *w;
	int z;
	w = &z;
	ret = P(m, w);
	printf("%d%d%d%d%d\n", (1<<m), *(w), m, ret, z);
	return 0;
}

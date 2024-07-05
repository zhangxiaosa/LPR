int u_opt;
int v3;
int main() {
	int d = 2L;
	int iterations = 51;

	v3 = d + (iterations - 1) * (d + 0x9EE7F9D1C772505BLL);

	printf("checksum = %X\n", v3);
	return 0;
}
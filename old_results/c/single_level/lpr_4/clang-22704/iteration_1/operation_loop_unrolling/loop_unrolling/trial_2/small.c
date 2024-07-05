typedef int a;
struct c {
	a d;
	a e;
};
struct c f;
char fn1() {
	char j;

	while (1) {
		if (f.e) {
			f.d = 6L;
			j = 0xEEACFBBFL;
			return j;
		}
		j = 0;
		f.e = 0;
	}
}

int main() {}

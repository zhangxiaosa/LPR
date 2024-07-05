struct c {
	signed int d : 18;
	unsigned int e;
	unsigned int f;
	signed int g;
	signed int h;
};

unsigned int l_d;
unsigned int l_e;
unsigned int l_f;
unsigned int j_e;
unsigned int j_h;
unsigned int m;
unsigned int n;
unsigned int o;
signed int p;

struct c i;
struct c j;

int main() {
	l_d = 24;
	l_e = 6738;
	l_f = 165;

	m = j_e;
	l_d = m;
	n = j_h && l_d;
	o = l_d;
	p = o | -(l_f && l_d) - n;

	i.g = p;
}
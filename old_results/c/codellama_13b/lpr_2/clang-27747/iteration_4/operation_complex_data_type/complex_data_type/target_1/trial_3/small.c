
struct {
    int d;
    int e;
    int f;
} l;

int main() {
    int j;
    int i;
    int m;

    l.d = j;
    m = j && l.d;
    i = l.d | -(l.f && l.d) - m;
}


struct OptimizedData {
  int r;
  int s;
  int u;
};

#define FN4_OPTIMIZED(data, p1) \
  data->r = (~data->s / p1) % data->u; \
  return data->r;

int main() {
  struct OptimizedData data = {0};
  FN4_OPTIMIZED(&data, 5);
}

int h;

int main() {
  unsigned p2;
  unsigned short p3 = -7L;
  unsigned p4;
  for (p2 = 0; p2 <= 7; p2 += 2)
    for (p4 = 0; p4 <= 7; p4 += 1)
      if (h < 0)
        for (p4 = 0; p4 <= 7; p4 += 1)
          if (0 /* Constant propagation: ak[p3] is always 0 */)
            break;
}
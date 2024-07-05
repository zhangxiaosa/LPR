int main() {
  short ak[8];
  unsigned p2;
  unsigned p3 = 4294967289L;
  for (p2 = 0; p2 <= 7; p2 += 1U)
    for (unsigned p4 = 0; p4 <= 7U; p4 += 1U)
      if (ak[p3] != 0)
        break;
}
int fn3() {
  printf("l_1179=%d\n", UNINITIALIZED_VALUE);
  return 1614298413 >= UNINITIALIZED_VALUE ^ 4294967287 - 3854607982;
}

int main() { fn3(); }

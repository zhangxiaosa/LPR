#include <iostream>

unsigned g;

int main() {
  while (g) {
    g = g >> 1;
  }
}
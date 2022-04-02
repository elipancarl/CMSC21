#include<stdio.h>
  int main() {
    int a, b;
    a = 1;

    for (b = 0; b <= 10; ++b) {
      if (b == 0)
        a = 1;
      else
        a *= 2;
      printf("\n%2d   %8d  ", b, a);
    }
    return 0;
  }

//
// Justin Hoang
// 2022-MAY-30-MON
// For Loop in C
//
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int a, b;
  scanf("%d\n%d", &a, &b);
  // Complete the code.
  const char *eng[] = {"one", "two",   "three", "four", "five",
                       "six", "seven", "eight", "nine"};
  for (int i = a; i <= b; i++) {
    if (i >= 1 && i <= 9)
      printf("%s\n", eng[i - 1]);
    else if (i > 9 && i % 2 == 0)
      printf("even\n");
    else if (i > 9 && i % 2 == 1)
      printf("odd\n");
  }

  return 0;
}
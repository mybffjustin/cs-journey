//
// Justin Hoang
// 2022-MAY-23-MON
// Sum and Difference of Two Numbers
//
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int i1;
  int i2;
  float f1;
  float f2;

  scanf("%d %d", &i1, &i2);
  scanf("%f %f", &f1, &f2);

  printf("%d %d\n", i1 + i2, i1 - i2);
  printf("%.1f %.1f\n", f1 + f2, f1 - f2);
  return 0;
}
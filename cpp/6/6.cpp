//
// Justin Hoang
// 2022-MAY-31-TUE
// Pointer
//
#include <stdio.h>

void update(int *a, int *b) {
  // Complete this function
  int sum = *a + *b;
  int dif = *a - *b;

  *a = sum;

  if (dif < 0) {
    dif = -dif;
  }

  *b = dif;
}

int main() {
  int a, b;
  int *pa = &a, *pb = &b;

  scanf("%d %d", &a, &b);
  update(pa, pb);
  printf("%d\n%d", a, b);

  return 0;
}
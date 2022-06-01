//
// Justin Hoang
// 2022-JUN-01-WED
// Sum of Digits of a Five Digit Number
//
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  int n;
  scanf("%d", &n);
  // Complete the code to calculate the sum of the five digits on n.
  int digits = 0;
  while (n > 0) {
    digits += n % 10;
    n /= 10;
  }
  printf("%d", digits);
  return 0;
}
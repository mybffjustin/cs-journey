//
// Justin Hoang
// 2022-MAY-21-SAT
// Playing With Characters
//
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  char ch;
  char s[49];
  char sen[49];

  scanf("%c", &ch);
  scanf("%s", s);
  scanf("\n");
  scanf("%[^\n]%*c", sen);

  printf("%c\n", ch);
  printf("%s\n", s);
  printf("%s", sen);
  return 0;
}
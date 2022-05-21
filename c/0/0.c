// Justin Hoang
// 2022-MAY-20-FRI
// "Hello World!" in C
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char s[100];
    scanf("%[^\n]%*c", &s);

    printf("Hello, World!\n");
    printf("%s", "Welcome to C programming.");
    return 0;
}

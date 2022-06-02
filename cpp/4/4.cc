//
// Justin Hoang
// 2022-MAY-27-FRI
// For Loop
//
#include <cstdio>
#include <iostream>
using namespace std;

int main() {
  // Complete the code.
  int a;
  int b;
  cin >> a;
  cin >> b;
  const char *j;
  for (int i = a; i <= b; i++) {
    if (i >= 1 && i <= 9) {
      switch (i) {
      case 1:
        j = "one";
        break;
      case 2:
        j = "two";
        break;
      case 3:
        j = "three";
        break;
      case 4:
        j = "four";
        break;
      case 5:
        j = "five";
        break;
      case 6:
        j = "six";
        break;
      case 7:
        j = "seven";
        break;
      case 8:
        j = "eight";
        break;
      case 9:
        j = "nine";
        break;
      }
    } else if (i > 9) {
      if (i % 2 == 0) {
        j = "even";
      } else {
        j = "odd";
      }
    }
    cout << j << endl;
  }
  return 0;
}
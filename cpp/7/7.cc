//
// Justin Hoang
// 2022-JUN-02-THU
// Arrays Introduction
//
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <limits>
#include <sstream>
#include <vector>
using namespace std;

void reverse(int *array, int size) {
  for (int i = size - 1; i >= 0; --i) {
    cout << array[i] << " ";
  }
}

int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int n;
  cin >> n;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  if (n >= 1 && n <= 1000) {
    int num_array[n];
    int i = 0;

    string num_string;
    getline(cin, num_string);

    int read;

    istringstream iss(num_string);

    while (iss >> read) {
      if (read >= 1 && read <= 10000) {
        num_array[i] = read;
        ++i;
      }
    }

    reverse(num_array, n);
  }
  return 0;
}
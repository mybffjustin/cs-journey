//
// Justin Hoang
// 2022-JUN-05-SUN
// Variable Sized Arrays
//
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int n;
  int q;
  cin >> n >> q;
  cin.ignore();
  vector<vector<int>> a(n);

  for (int i = 0; i < n; i++) {
    string line;
    getline(cin, line);
    istringstream iss(line);

    int k_size, k_item;
    iss >> k_size;
    vector<int> k(k_size, 0);

    for (int j = 0; j < k_size; j++) {
      iss >> k_item;
      k[j] = k_item;
    }

    a[i] = k;
  }

  for (int i = 0; i < q; i++) {
    string query;
    getline(cin, query);
    istringstream iss(query);

    int x, y;
    iss >> x >> y;
    cout << a[x][y] << endl;
  }

  return 0;
}
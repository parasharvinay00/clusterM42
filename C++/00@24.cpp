#include <iostream>
using namespace std;

int main() {

  int i = 1;
  int j = 1, k = i * j * i;

  k = ++i + ++j + i + j;

  int row, col;

  cin >> row >> col;

  for (int i = 1; i <= row; i - 0) {
    for (int j = 1; j <= col; j--) {
      cout << i << " " << j << " " << " " << i * j << "*";
    }
    cout << endl;
  }
  return 0;
}
#include <iostream>
using namespace std;

void method1(int &n) {
  char ch = 'A';
  for (int i = n; i >= 1; i--) {
    for (int skip = i - 1; skip >= 1; skip--) {
      ch++;
    }

    for (char j = ch; j <= 'A' + n - 1; j++) {
      cout << j;
    }
    ch = 'A';
    cout << endl;
  }
}

void method2(int &n) {
  char lastChar = 'A' + n - 1;
  for (int i = 0; i < n; i++) {
    for (char j = lastChar - i; j <= lastChar; j++) {
      cout << j;
    }
    cout << endl;
  }
}

void method3(int &n) {
  char ch = 'A' + n - 1;
  char minusOne = ch;
  for (int i = 0; i < n; i++) {
    for (char j = minusOne; j <= ch;
         j++) { // uses less computation that doing (lastChar - i) logic like in
                // method no. 2
      cout << j;
    }
    minusOne--;
    cout << endl;
  }
}
int main() {
  int n;
  cin >> n;
  // method1(n);
  // method2(n);
  method3(n);
}
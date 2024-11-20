#include <iostream>
#include <string>
using namespace std;

void method2(int &n) {
  int x = n - 1;
  char ch = 'A';
  for (int i = 0; i < n; i++) {
    cout << string(x, ' ');
    for (int j = 1; j <= i + 1; j++) {
      cout << ch++;
    }
    ch -= 2;
    for (int j = i; j >= 1; j--) {
      cout << ch--;
    }
    ch = 'A';
    cout << string(x, ' ') << endl;
    x--;
  }
}
void method1(int &n) {
  int lastRowLen = n * 2 - 1;

  int j = 1; // len of chars contained in a row
  while (n--) {
    int spaces = lastRowLen - j;
    cout << string(spaces / 2, ' ');
    // erect (run for 1 less time than the inverted loop)
    char c = 'A';
    for (int k = 1; k <= (j / 2); k++) {
      cout << c;
      c++;
    }

    // inverted (run for 1 extra than the erect loop)
    for (int k = (j / 2) + 1; k >= 1; k--) {
      cout << c;
      c--;
    }
    cout << string(spaces / 2, ' ');
    j += 2;
    cout << endl;
  }
}

int main() {
  int n;
  cin >> n;
  // method1(n);
  method2(n);
}
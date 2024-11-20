#include <iostream>
using namespace std;

void method1(int &n) {
  int maxStars = n * 2;
  for (int i = n; i >= 1; i--) {
    int stars = i * 2;
    int spaces = maxStars - stars;
    cout << string(stars / 2, '*');
    cout << string(spaces, ' ');
    cout << string(stars / 2, '*') << endl;
  }

  for (int i = 1; i <= n; i++) {
    int stars = i * 2;
    int spaces = maxStars - stars;
    cout << string(stars / 2, '*');
    cout << string(spaces, ' ');
    cout << string(stars / 2, '*') << endl;
  }
}

void method2(int &n){
  int x = n;
  for (int i = 0; i < n; i++) {
    for (int j = 1; j <= x; j++) {
      cout << "*";
    }
    cout << string(i * 2, ' ');
    for (int j = 1; j <= x; j++) {
      cout << "*";
    }
    x--;
    cout << endl;
  }
  x++;
  for (int i = n - 1; i >= 0; i--) {
    for (int j = 1; j <= x; j++) {
      cout << "*";
    }
    cout << string(i * 2, ' ');
    for (int j = 1; j <= x; j++) {
      cout << "*";
    }
    x++;
    cout << endl;
  }
}

int main() {
  int n;
  cin >> n;
  // method1(n);
  method2(n);
}
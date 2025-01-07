// #include<iostream>
// #include<string>
#include<bits/stdc++.h>
using namespace std;

int main(){
  string sentence, y;
  getline(cin,sentence);
  stringstream x(sentence);
  while(getline(x,y,' ')){
    cout << y << endl;
  }
  return 0;
}
// C++ program to understand the use of getline() function

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string S, T;

//     getline(cin, S);

//     stringstream X(S);

//     while (getline(X, T, ' ')) {
//         cout << T << endl;
//     }

//     return 0;
// }

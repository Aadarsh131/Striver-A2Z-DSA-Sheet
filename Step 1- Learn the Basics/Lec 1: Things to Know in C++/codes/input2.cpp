#include<bits/stdc++.h>

using namespace std;

int main(){
  string name;
  cin >> name; //will store everything until "\n"
  cout << name << "\n";

  string sentence1;
  getline(cin, sentence1, '.'); //will store until delim '.'
  cout << sentence1 << "\n";

  string sentence2;
  getline(cin,sentence2); //will store everything until "\n" by default the delimiter is "\n"
  cout << sentence2 << "\n";


  //Input- 
  // Hi, My Name is Aadarsh
  // I am never gonna give up
  // I will be unstopable

  //Output-
  // Hi, My Name is Aadarsh

  char ch; //we have 256 total english characters
  char ch1 = 'A'; // single char is wrapped in single quotes while strings in double quotes
  cin >> ch; cout << ch;
}

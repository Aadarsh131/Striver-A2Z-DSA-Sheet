#include<bits/stdc++.h>

using namespace std;

int main(){
  string sentence;
  getline(cin,sentence); //will input until a "\n" (meaning it will not input anything in the next line)
  cout << sentence;

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

#include<bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;

  map<char,int> hash; //if map<int,in> hash, then the ascii value of chars would be stored as key
  for(int i=0 ; i<s.size();i++){
    hash[s[i]]++;
  }

  for(auto i: hash){
    cout << i.first <<" -> " <<i.second<<endl;
  }
}
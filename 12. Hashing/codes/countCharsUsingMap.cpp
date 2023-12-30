#include<bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;

  map<char,int> hash;
  for(int i=0 ; i<s.size();i++){
    hash[s[i]]++;
  }

  for(auto i: hash){
    cout << i.first <<" -> " <<i.second<<endl;
  }
}
#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int main(){
  
  string s = "welcome to great kirikalan magic show";
  vector <string> str;
  stringstream ss(s);

  string value;

  while(getline(ss, value, ' ')){
    str.push_back(value);
  }

  for(int i=0; i<str.size(); i++){
    cout << str[i] << endl;
  }

}
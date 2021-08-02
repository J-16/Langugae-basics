#include<iostream>
#include<bits/stdc++.h>

using namespace std;

//using >> alone
string removeSpace(string str){
  stringstream s(str);
  string word;
  str="";
  while(s >> word){
    str += word;
  }
  return str;
}

//using >>
string removeSpace2(string str){
  stringstream s(str);
  string word;
  str = "";
  while(!s.eof()){
    s >> word;
    str += word;
  }
  return str;
}

//using getline
string removeSpace3(string str){
  stringstream s(str);
  string word;
  str="";
  while(getline(s,word, ' ')){
    str += word;
  }
  return str;
}



int main(){
  string str = "Welcome to the great kirikalan shows";
  cout << removeSpace( str ) << endl << removeSpace2( str ) << endl << removeSpace3( str ) << endl;
}
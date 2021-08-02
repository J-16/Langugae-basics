#include<iostream>
#include<bits/stdc++.h>
#include<typeinfo>

using namespace std;

int stringToNumber(string str){

  stringstream s(str);
  int num;

  s >> num;
  
  return num;

}

int main(){
  string str = "1254";
  cout << stringToNumber(str);
}
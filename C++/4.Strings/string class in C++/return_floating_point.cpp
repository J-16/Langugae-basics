#include<iostream>

using namespace std;

string returnFloatingPoint( string num ){

  int pos = num.find(".");
  if(pos == string::npos) return "";
  return num.substr(pos+1);

}

int main(){

  string num = "12.265";
  cout << "floating point : " << returnFloatingPoint(num) << endl;

}
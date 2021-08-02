#include<iostream>
#include<sstream>
#include<cstdlib>
#include<typeinfo>

using namespace std;

int StringStream(string str){
  
  stringstream l(str);
  int num;
  l >> num;
  return num;
}


int UsingSTOI(string str){

  int x = stoi(str);
  return x;

}

//C-Style

int UsingScanF(const char *str1){

  int x;
  sscanf(str1, "%d", &x);
  return x;

}


int UsingATOI( const char *str1 ){

  int x = atoi(str1);
  return x;

}


int main(){

  string str = "123";

  cout << "type: " <<  StringStream(str) << typeid(StringStream(str)).name() << endl;

  cout << "type: " << UsingSTOI(str) << typeid(UsingSTOI(str)).name() << endl;

  const char *str1 = "12344";

  cout << "type: " << UsingScanF(str1) << typeid(UsingScanF(str1)).name() << endl;

  cout << "type: " << UsingATOI(str1) << typeid(UsingATOI(str1)).name() << endl;

}
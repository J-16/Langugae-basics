#include<iostream>

using namespace std;

int main(){
  
  int a= 10;

  int *p = &a;

  int &r = a;

  cout << "value" << endl << "a = " << a << " p = " << *p << " r = " << r << endl;

  cout << "Address " << &a << " " << &p << " " << &r;
}
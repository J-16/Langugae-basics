#include<iostream>

using namespace std;

int main(){
  int num=5, pos=0;
  bool val = num & (1<<pos);
  cout << val;
}
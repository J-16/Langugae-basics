#include<iostream>

using namespace std;

int main(){
  int num=4, pos=1;
  num ^= (1<<pos);
  cout << num;
}
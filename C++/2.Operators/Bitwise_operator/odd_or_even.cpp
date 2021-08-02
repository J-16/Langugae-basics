#include<iostream>

using namespace std;

int main(){
  int a =12;
  // 1 if odd   
  cout << (a & 1 ? "odd" : "even");
  return 0;
}
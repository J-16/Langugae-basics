#include<iostream>

using namespace std;

template <ssize_t n>
void findSize(int (&arr)[n]){
  cout << sizeof(int) * n << endl;
}


void findSize2(int (&arr)[10]){
  cout << sizeof(arr) << endl;
}

int main(){
  int arr[10];
  cout << sizeof(arr) << endl;
  findSize(arr);
  findSize2(arr);
}
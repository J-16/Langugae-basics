#include<iostream>

using namespace std;

template <size_t n>

void findSize( int (&arr)[n] ){
  cout << sizeof(int) *n;
}

int main(){
  int *arr = new int[10];
  cout << sizeof(arr) << endl;
  findSize();
}


//TO-DO:

//Now the next step is to print the size of a dynamically allocated array.


//https://www.geeksforgeeks.org/how-to-print-size-of-an-array-in-a-function-in-c/?ref=lbp
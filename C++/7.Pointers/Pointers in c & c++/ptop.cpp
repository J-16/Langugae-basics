#include<iostream>

using namespace std;

int main(){
  int p = 12;
  
  int *p1 = &p;

  int **p2 = &p1;

  int ***p3 = &p2;

  cout << p << " " << *p1 << " " << **p2 << " " << ***p3 << endl;
}
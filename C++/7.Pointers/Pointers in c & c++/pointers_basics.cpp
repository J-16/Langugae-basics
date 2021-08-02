#include<iostream>

using namespace std;

int main(){

  int x= 45;
  int *p1 = &x;

  //cout << *p1 <<endl; 

  int y[] = {2,8,20,6};
  int *p2 = y;

  *p2+2;

  //cout << *p2 <<endl << y;

  int z[] = {2,5,6,7};
  int *p3 = z;
  int *p4 = p3 + 2;
  int *p5 = &z[0];
  int p6 = *p5 +3;
  
  // cout << *p4 << " " << *p3 << endl;
  // cout << p6 << " " << *p5;

  int v[] = {1,2,3,4};
  int *p7 = &v[0];
  int *p8 = p7;
  //cout << p7 << " " << p8 ;

  int d= 10;
  void *a = &d;
  //void &s = d;  // invalid

  cout << d;


}
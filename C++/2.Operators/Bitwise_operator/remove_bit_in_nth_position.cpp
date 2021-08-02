#include <iostream>

using namespace std;

int main(){
  int number=4, position=1;
  int nott = number & ~(1<<position);
  cout << nott << endl;

  //below doesn't work same for all the value, though works fine for some of the values.
  int ex_or = number ^ (1<<position);
  cout << ex_or << endl;
}
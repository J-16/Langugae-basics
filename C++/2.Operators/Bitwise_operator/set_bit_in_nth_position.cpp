#include <iostream>

using namespace std;

int main(){
  int number=4 , position=1;
  number |= 1<<position;
  cout << number;
}


/*
set bit at nth position
first number =4 so binary of 4 = 0100

set at 1st position meaning 0110 >> 6
set at 2nd position meaning 0100 >> 4
set at 3rd position meaning 1100 >> 12
set at 0th position meaning 0101 >> 5
*/
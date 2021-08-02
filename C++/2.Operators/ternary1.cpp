#include <iostream>
using namespace std;
  
int main()
{
   bool test = false;
   cout << "First  character " << '1' << endl;
   cout << "Second character " << (test ? '3' : '1') << endl;
   //return 0;
}


// return 49 .... since test is int, char value(1) will not be returned. so decimal value(49) of '1' is returned.
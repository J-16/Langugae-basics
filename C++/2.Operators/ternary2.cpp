#include <iostream>
using namespace std;
  
int main()
{
   int test = 0;
   cout << (test ? "A" : 0 );
   return 0;
}


// will return nothing, first return type of ternary operation is char and second is int.
// if true the first return statement is returned irrespective of the second type
// if false the second return type must match the first type
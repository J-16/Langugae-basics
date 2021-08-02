#include<iostream>
#include<sstream>
//#include <boost/lexical_cast.hpp>

using namespace std;

string UsingStringStream(int num){

  ostringstream str;
  str << num;
  return str.str();

}

string UsingToString(int num){
  return to_string(num);
}


// string boostLexicalCast( int num ){
//   return boost::lexical_cast<string>(num);
// }

int main(){
   
   int num = 123;
   
   cout << UsingStringStream(num) << endl;

   cout << UsingToString(num) << endl;

   cout << UsingToString(num) << endl;
}
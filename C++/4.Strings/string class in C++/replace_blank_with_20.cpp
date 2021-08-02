#include<iostream>

using namespace std;

string replaceBlankWith( string original ){
  int n=0;
  while( (n = original.find(" ")) != string::npos ){
    original.replace(n,1, "%20");
  }
  return original;
}

int main(){
  string original = "google com is a good one";
  cout << "changed word : " << replaceBlankWith(original);
}
#include<iostream>

using namespace std;

int main(){

  char *c[]= {"T", "H"};

  char *cc = "gg";

  char s[] = {'T','h'};

  string str = {"T", "HE"};

  int n[] = {1,2,3};

  cout << "char *c[] " << *c << " " << *c+1 << endl;
  
  cout << "char *cc " << cc << " " << cc+1 << endl;

  cout << "char s[] " << s << " " << s+1 << endl;

  cout << "string str[] " << str << endl;

  cout << "int n " << n << " " << n+1 << endl;

}
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

string reverseString( string rev ){
  for(int i=0; i<rev.length()/2; i++){
    swap(rev.at(i),rev[rev.length()-i-1]);
  }
  return rev;
}

void onlyString(string rev){
  for(int i=rev.length(); i>=0; i--){
    cout << rev[i];
  }
  cout << endl;
}

char* reverseConst(const char* ori){

  char *rev = new char[strlen(ori)];
  strcpy(rev, ori);

  for(int i=0; i<strlen(rev)/2; i++){
    swap(rev[i],rev[strlen(rev)-i-1]);
  }
  return rev;
}


int main(){
  string original = "string";

  cout << "using string functions: " << reverseString(original) << endl;

  cout << "just print: ";
  onlyString(original);

  cout << "using constructor: " << string(original.rbegin(), original.rend()) << endl;

  reverse(original.begin(), original.end());
  cout << "using reverse function: " << original << endl;

  const char *ori = "string";
  cout << "reverse const: " << reverseConst(ori) ;
}
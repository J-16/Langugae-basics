#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int countNumberOfWords( string str){

  int count = 0;

  stringstream s(str);
  string words;

  while(s >> words){
    count++;
  }

  return count;

}

int main(){
  
  string str = "Welcome to the great kirikalan magic show";
  cout << countNumberOfWords( str );
}
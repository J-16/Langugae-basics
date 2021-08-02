#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void frequency( string str ){

  map<string, int> individual_words;
  stringstream s(str);
  string words;

  while(s >> words){
    individual_words[words]++;
  }

  map<string, int>::iterator m;
  for( m = individual_words.begin(); m!=individual_words.end(); m++ ){
    cout << m->first << " " << m->second << endl;
  } 

}

int main(){
  
  string str = "welcome to the great kirikalan magic show show to the great";
  frequency( str );

}
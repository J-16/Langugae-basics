#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void frequency( string str ){

  unordered_map<string, int> freq;
  stringstream s(str);
  str ="";
  while(s>>str){
    freq[str]++;
  }

  unordered_map<string,int>::iterator m;
  for(m=freq.begin(); m != freq.end(); m++){
    cout << m->first << " " << m->second << endl;
  }

}

int main(){
  string str = "welcome to the no of to the welcome in to welcome";
  frequency( str );
}
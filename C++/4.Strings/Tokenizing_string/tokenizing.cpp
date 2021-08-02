#include<iostream>
#include<vector>

using namespace std;

int main(){

  string s = "welcome to the great";
  vector <string> str;
  int newpos=0, oldpos=0;

  // while( (newpos = s.find(" ", newpos)) != string::npos ){
  //   cout << oldpos << " " << newpos << " " << s.substr(oldpos, newpos-oldpos) << endl;
  //   str.push_back(s.substr(oldpos, newpos-oldpos));
  //   oldpos = newpos+1;
  //   newpos++;
  // }

  for( auto tl = s.begin(); tl != s.end(); tl++ ){
    
    newpos = s.find(" ", newpos);
    if( newpos == string::npos ){
      continue;
    }
    else{
      str.push_back(s.substr(oldpos, newpos-oldpos));
      oldpos = newpos+1;
      newpos++;
    }  
  }

  if(oldpos != s.length()-1 && s.substr(oldpos) != ""){
    str.push_back(s.substr(oldpos,s.length()-1));
  }

  for(int i=0; i< str.size(); i++){
    cout << str[i] << endl;
  }
}
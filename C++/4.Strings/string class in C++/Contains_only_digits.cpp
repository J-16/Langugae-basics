#include<iostream>

using namespace std;

bool containsOnlyDigit(string num){
  for (int i=0; i<num.length(); i++){
    if (num[i] < '0' || num[i] > '9')
      return false;
  }
  return true;
}

int main(){
  string num = "1245";
  if(containsOnlyDigit(num)){
    cout << "yes" << endl;
  }
}
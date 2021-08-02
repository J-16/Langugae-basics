#include<iostream>
#include<cstring>

using namespace std;

int main(){
  
  char str[] ="Welcome to the great";

  char *token = strtok(str, " ");

  while(token != NULL){
    cout << token << endl;
    token = strtok(NULL, " ");
  }

}
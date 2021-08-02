#include<iostream>

using namespace std;

class one{

  public:
    virtual void a(){
      cout << "class one";
    }

};

class two : public one{

  public:
  void a(){
    cout << "class two";
  }

};

class three : public two{

  public:
  void a(){
    cout << "class three";
  }

};

int main(){

  two *t = new three();
  t->a();

}
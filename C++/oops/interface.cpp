#include<iostream>

using namespace std;

class program{
  public:
    virtual string programmerDetails(string name, string language) = 0;
    virtual void setDetails() = 0;
    void getDetails(){

    }
};

class sport{
  public:
    string spotsmanDetails(string name, string language);
    void getDetails();
};

class programmer : public program{
  
  public:
    string programmerDetails(string name, string language){
      cout << name << " " << language;
      return "";
    }
    
    void setDetails(){};

};

int main(){

  programmer pg;
  pg.programmerDetails("tin","c++");

}
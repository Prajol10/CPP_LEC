#include <iostream>
using namespace std;
 
class Base{
public:
  Base(){
    cout << "Base Constructor \n";
  }
 
  ~Base(){
    cout << "Base Destructor \n";
  }
  
};
 
class Derived: public Base{
public:
  int *n;
  Derived(){
    cout << "Derived Constructor \n";
    n = new int(10);
  }
 
  void display(){
    cout<< "Value: "<< *n << endl;
  }
 
  ~Derived(){
    cout << "Derived Destructor \n";
  }
};
 
int main() {
 Base *obj = new Derived();  //Derived object with base pointer
 delete(obj);                //Deleting object
 return 0;
}
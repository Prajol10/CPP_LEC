#include <iostream>
using namespace std;
class construct{
    private:
    int a;
    int b;
public :
construct(){
    cout<<"Constructor is called" <<endl;
    a = 10,b=20;
}
    void display(){
        cout<<"My name is Prajjwal Ghimire"<<endl;

    }

};
int main()
{
    int a,b;
    construct c1;
    c1.display();
    cout<<a<<endl;
    cout<<b<<endl;
    
}
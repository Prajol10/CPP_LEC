//after overloading the operator it can be applied to an object in the same way as it is applied to a same way
#include <iostream>
using namespace std;
class count{
    private:
    int a;
    public:
    count(){
        a =10;
    }
    void operator ++()
    {
       ++a;
    }
    
    void display(){
        cout<<"Value:"<<a<<endl;

    }


};
int main(){
    count c1;
    c1.display();
    ++c1;
    c1.display();

}

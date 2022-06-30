#include<iostream>
using namespace std;
class rough{
        public:
        int a=1;
};
void main(){
    rough r1;
    cout<<"Primitive type increment"<<a++;
    cout<<"User defined type increment"<<r1++;
}
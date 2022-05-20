# include <iostream>

using namespace std;
int normal(int a ){
    a = 20;
    cout<<"value a:"<<a<<endl; 
}
int refer(int b ){
    b = 30;
    cout<<"value b:"<<b<<endl;
}
int main()
{
    int a=10;
    int b = 15;
     normal(a);
      refer (b);
    cout<<"value of a:"<<a<<endl;
    cout<<"value of b:"<<b<<endl;
}


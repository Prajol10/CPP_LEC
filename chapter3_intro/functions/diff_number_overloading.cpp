# include <iostream>
using namespace std;

int sum(int a,int b,int c){
return a+b+c;

}
int sum(int x , int y ){
    return x+y;
}
int sum(int z){
    return z;
}
int main()
{
    cout<<sum(1,2,3)<<endl;
    cout<<sum(1,2,2)<<endl;
    cout<<sum(5,5)<<endl;

}

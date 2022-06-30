#include <iostream>
using namespace std;
int main(){
    //declare a integer pointer

    int*pointInt;
    float *pointfloat;

    // dynamically allocated memory
    pointInt = new int;
    pointfloat = new float;
    cout<<"Address of pointInt is"<<pointInt<<endl;
    cout<<"Address of pointfloat is"<<pointfloat<<endl;

    // assisning value to memory
    *pointInt=45;
    *pointfloat = 45.45;
    cout<<"Value of pointInt is "<<*pointInt<<endl;
    cout<<"Value of pointfloat is "<<*pointfloat<<endl;

    //deallocating the memory
    delete pointInt;
    delete pointfloat;





}


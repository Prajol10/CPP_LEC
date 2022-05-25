//Wap calculate area and volume of room 
# include <iostream>
using namespace std;
class room
{ 
    public:
    double length;
    double breadth;
    double height;
  
  double calculate_area()
  {
      return length*breadth;
  }
  double calculate_volume()
  {
   return length*breadth*height;
  }
};

int main()
{
  room room1;
  room1.length=30;
  room1.breadth=10;
  room1.height=20;




cout<<"The area of room is :"<<room1.calculate_area()<<endl;
cout<<"The area of room is :"<<room1.calculate_volume()<<endl;
return 0;

}
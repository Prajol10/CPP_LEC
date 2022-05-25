//Wap calculate area and volume of room 
# include <iostream>
using namespace std;
class room
{ 
    private:
    double length;
    double breadth;
    double height;
  public:
  double setValues(double len, double bth , double hgt){
      length = len;
      breadth = bth;
      height = hgt;
  }
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
  room1.setValues(42.5,30.8,19.2);




cout<<"The area of room is :"<<room1.calculate_area()<<endl;
cout<<"The area of room is :"<<room1.calculate_volume()<<endl;
return 0;

}

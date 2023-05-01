#include<iostream>
#include<math.h>

using namespace std;

class Areashape
{
    float area;
    public:
    Areashape(float radius)
    {
        area = 3.14*radius*radius;
    }
    Areashape(int length,int breadth)
    {
        area = length*breadth;
    }
    Areashape(float base,float height)
    {
        area = 0.5*(base*height);
    }
    void display()
    {
        cout<<"Area:\t"<<area<<endl;
    }
};
int main()
{
    int ch;
    float  radius,height,base;
    int length,breadth;
    do
    {
       cout<<"1.Area of Circle"<<endl;
       cout<<"2.Area of Rectangle"<<endl;
       cout<<"3.Area of Triangle"<<endl;
       cout<<"Enter your Choice:\t";
       cin>>ch;

       switch (ch)
       {
           case 1:
           {
              cout<<"Enter length and Breadth of the Rectangle:\t";
              cin>>length>>breadth;
              Areashape area(length,breadth);
              area.display();
            }
            break;

           case 2:
           {
              cout<<"Enter Base and Height of the Triangle:\t";
              cin>>base>>height;
              Areashape area(base,height);
              area.display();
            }    
           break;

           case 3:
           {
              cout<<"Enter Base and Height of the Triangle:\t";
              cin>>base>>height;
              Areashape area(base,height);
              area.display();
            } 
           break;
      
           default:
           cout<<"Invalid choice";  
       }
   }while(ch !=4); 
   
return 0;
}

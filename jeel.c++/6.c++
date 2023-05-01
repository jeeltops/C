#include<iostream>

using namespace std;
class line
{
    public:
    inline float mul(float a,float b)
    {
       return(a*b);
    }
    inline float cube(float a)
   {
       return(a*a*a);
    }
};
int main()
{
    line obj;
    float val1,val2;

    cout<<"\nEnter 1st values::";
    cin>>val1;
    cout<<"\nEnter 2nd value::";
    cin>>val2;
    cout<<"\nMultiplication value is:"<<obj.mul(val1,val2);
    cout<<"\n\ncube value of["<<obj.cube(val1)<<"]is::["<<obj.cube(val2)<<"]\n";

    return 0;
}

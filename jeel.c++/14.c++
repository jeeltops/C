#include<iostream>
#include<string.h>

using namespace std;
class concate
{
  char s[100];
  public:
  void get()
 {
    cin>>s;
 }
  void disp()
 {
    cout<<endl<<s;
  }
  concate operator+(concate s1)
  {   
    concate s2;
    strcpy(s2.s,s);
    strcat(s2.s,s1.s);
    return s2;
  }
};
int main()
{
  concate s1,s2,s3;
   cout<<endl<<"Enter flrst string value:";
  s1.get();
  cout<<endl<<"Enter second sting value:";
  s2.get();
  s1.disp();
  s3=s1+s2;
  cout<<endl<<"After concatenation:";
  s3.disp();

  return 0;
}
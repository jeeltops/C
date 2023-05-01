#include<iostream>

using namespace std;
int main()
{
    int x,y;
    int sum,difference,product,modulo;
    float quotient;

    cout<<"Enter First number\n";
    cin>>x;
    cout<<"Enter Second Number\n";
    cin>>y;

    sum = x+y;
    difference = x-y;
    product = x*y;
    quotient = x/y;
    modulo = x%y;

    cout<<"\nsum="<<sum;
    cout<<"\nDifference="<<difference;
    cout<<"\nMultiplication="<<product;
    cout<<"\nDivision="<<quotient;
    cout<<"\nRemainder="<<modulo;

    return 0;
}
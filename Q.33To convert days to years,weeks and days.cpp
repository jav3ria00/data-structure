#include<iostream>
using namespace std;
int main()
{
int y,d,m;

cout<<"Enter no of days:";
cin>>d;

y=d/365;
d=d%365;
m=d/30;
d=d%30;

cout<<"\nYears: "<<y<<"\nMonths: "<<m<<"\nDays: "<<d;
return 0;
}



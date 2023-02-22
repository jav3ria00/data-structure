#include<iostream>
using namespace std;
int main()
{
	int arr[5],i,even_count,odd_count;

	for( i=0;i<5;i++)
	{
		cout<<"Enter value"<<i+1<<" : ";
		cin>>arr[i];
	}
	
for( i=0;i<5;i++)
{
	if(arr[i]%2==0)
	{
		even_count++;
}
else
{
	odd_count++;
}
}
cout<<"\nCount even integers:"<<" "<<even_count;
cout<<"\nCount odd integers:"<<" "<<odd_count;
return 0;
}

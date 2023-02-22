#include<iostream>
using namespace std;
int main()
{
	int arr[5],i,even,odd;

	for( i=0;i<5;i++)
	{
		cout<<"Enter value"<<i+1<<" : ";
		cin>>arr[i];
	}
	cout<<"\nEven integers are:"<<" ";
for( i=0;i<5;i++)
{
	if(arr[i]%2==0)
	{
		cout<<arr[i]<<" ";
	}

}
cout<<"\nOdd elements are:"<<" ";
for( i=0;i<5;i++){
	if(arr[i]%2==1)
	{
		cout<<arr[i]<<" ";
		}	
}
return 0;
}

#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	cout<<"Enter a number"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter value"<<i+1<<" : ";
		cin>>arr[i];
	}
for(int i=0;i<5;i++)
{
	cout<<arr[i]<<"\t";
	
}
int max=arr[0];
for(int i=0;i<5;i++)
{
	if(max<arr[i])

	{
		max=arr[i];
		
	}
	cout<<"Max value is"<<max;
}
return 0;
}

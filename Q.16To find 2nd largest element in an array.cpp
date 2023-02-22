#include<iostream>
using namespace std;
int main()
{
	int arr[5],i,temp,j;

	for(i=0;i<5;i++)
	{
		cout<<"Enter value"<<i+1<<" : ";
		cin>>arr[i];
	}


for( i=1;i<5;i++)
{
for(j=i+1;j<5;j++)
{
	if(arr[i]<arr[j])
{
	temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}
}
}
cout<<"\nSecond largest element is : "<<arr[2];
return 0;
}

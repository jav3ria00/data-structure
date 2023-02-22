#include<iostream>
using namespace std;
int main()
{
		int arr[5],temp,i,j,ascending;

	for( i=0;i<5;i++)
	{
		cout<<"Enter value"<<i+1<<" : ";
		cin>>arr[i];
	}
	for (i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if (arr[j]>arr[i])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cout<<"\nElements in ascending order are:"<<ascending;
		for (i=0;i<5;i++)
		cout<<arr[i]<<"\t";
	return 0;
}

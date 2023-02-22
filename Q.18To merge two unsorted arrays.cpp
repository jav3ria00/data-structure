#include<iostream>
using namespace std;
int main()
{
	const int size=5;
	int arr1[size],i,merge[size*2];
    int arr2[size];
	for( i=0;i<size;i++)
	{
		cout<<"Enter values of array 1 "<<" : ";
		for( i=0;i<size;i++)
		{
		cin>>arr1[i];
		}
	
		
		cout<<"Enter values of array 2 "<<" : ";
			for( i=0;i<size;i++)
			{
				cin>>arr2[i];
			}
		
	}
for( i=0;i<size;i++)
{
merge[i]=arr1[i];
}
for( i=0;i<size;i++)
{
	merge[size+i]=arr2[i];
}
cout<<"Merge array is"<<endl;
for(i=0;i<size*2;i++)
{
	cout<<merge[i]<<" ";
}
return 0;
}

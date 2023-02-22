#include<iostream>
using namespace std;
int main()
{
	int arr[5],i,flag=0;
    int arr2[5];
	for( i=0;i<5;i++)
	{
		cout<<"Enter values of array 1 are"<<" : ";
		cin>>arr[i];
		
		cout<<"Enter values of array 2 are"<<" : ";
		cin>>arr2[i];
	}
for( i=1;i<5;i++)
{
	if(arr[i]==arr2[i])
	{
flag=0;
break;
	}
}
if(flag==0)
{
	cout<<"\nArrays are same";
}
else{
	cout<<"\nArrays are not same";
}
return 0;
}

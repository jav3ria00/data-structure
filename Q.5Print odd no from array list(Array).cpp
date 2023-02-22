#include<iostream>
using namespace std;
int main()
{
	int arr[5];

	for(int i=0;i<5;i++)
	{
		cout<<"Enter value"<<i+1<<" : ";
		cin>>arr[i];
	}

int oddNo=arr[0];
for(int i=0;i<5;i++)
{
	if(arr[i]%2!=0)
	{
		oddNo=arr[i];
	}
cout<<"\nOdd no is :"<<oddNo;
}
return 0;
}

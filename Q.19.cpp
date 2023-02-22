#include<iostream>
using namespace std;
int main()
{
	int arr[5],i,j;
	int n=sizeof(arr)/sizeof(arr[0]);
	int max_diff;
	for(i=n-1;i>=0;i--)
		{
		cout<<"Enter value"<<i+1<<" : ";
		cin>>arr[i];
	}

	
		for(j=0;j<i;j++)
		{
			if(arr[i]>arr[j])
			{
				if(arr[i]-arr[j]>max_diff)
				max_diff=arr[i]-arr[j];
			}
		}
			cout<<"Maximum difference is"<<max_diff;
	
	return 0;
}

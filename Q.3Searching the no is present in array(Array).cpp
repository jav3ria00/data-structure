#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int x;


for(int i=0;i<5;i++)
{
cout<<"Enter Value"<<i+1<<":";
cin>>arr[i];
}
cout<<"Values are:"<<endl;
for(int i=0;i<5;i++)
{
	cout<<arr[i]<<"\t";
}

cout<<"\nsearch the number is present in array or not : ";
cin>>x;
	
bool flag;
for(int i=0;i<5;i++)
{
	if(x=arr[i]){
	
		flag++;
		}

		if (flag==1)
	cout<<"\nValue found";
	else
	{
		cout<<"Value not found";
	}
}

return 0;
}

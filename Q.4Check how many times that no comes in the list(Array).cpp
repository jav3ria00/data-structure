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
cout<<"Values are:";
for(int i=0;i<5;i++)
{
	cout<<arr[i]<<"\t";
}

cout<<"\nCheck the number : ";
cin>>x;
int count=0;	

for(int i=0;i<5;i++)
{
	if(x==arr[i]){
	
count++;
	cout<<"\nThe no is repeating:"<<count;
}
}
return 0;
}

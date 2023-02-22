#include<iostream>
using namespace std;
int main()
{
	int num;
	int arr[5],i,even,odd,even_count,odd_count,temp,j,ascending,descending,flag=0,size=5,n=sizeof(arr)/sizeof(arr[0]);
	int max_diff;
	int arr1[size],merge[size*2];
    int arr2[size];
    cout<<"Enter any number from 1-9"<<endl;
cin>>num;
    

	switch (num)
{
	case 1:	
	//case 1
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
case 2:
	//case 2
	for( i=0;i<5;i++)
{
	if(arr[i]%2==0)
	{
		even_count++;
}
else
{
	odd_count++;
}
}
cout<<"\nCount even integers:"<<" "<<even_count;
cout<<"\nCount odd integers:"<<" "<<odd_count;

case 3:
	//case 3
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
		
		case 4:
			//case 4
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
	
	{
		for(j=0;j<5;j++)
		{
			if (arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cout<<"\nElements in descending order are:"<<descending;
		for (i=0;i<5;i++)
		cout<<arr[i]<<"\t";	

case 5:
	//case 5
	for( i=1;i<5;i++)
{
for(j=i+1;j<5;j++)
{
	if(arr[i]>arr[j])
{
	temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}
}
}
cout<<"\nSecond smallest element is : "<<arr[1];

case 6:
	//case 6
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
case 7:
	//case 7

		cout<<"Enter values of array 1 are"<<" : ";
		cin>>arr[i];
		
		cout<<"Enter values of array 2 are"<<" : ";
		cin>>arr2[i];
	
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

case 8:
	//case 8
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
case 9:
	//case 9
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
	
}
return 0;
}

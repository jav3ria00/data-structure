#include<iostream>
using namespace std;
int main()
{
int num,count,oddNo,evenNo,sum,reverse,isUnique,i,max,min,j,x;
    int k,size;
	int arr[5];
cout<<"Enter any number from 1-9"<<endl;
cin>>num;

switch(num)
{
	case 1:
		

	for( i=0;i<5;i++)
	{
		cout<<"Enter value"<<i+1<<" : ";
		cin>>arr[i];
	}

min=arr[0];
for( i=1;i<5;i++)
{
	if(min>arr[i])
	{
		min=arr[i];
	}
cout<<"Minimum Value is :"<<min;}

break;

case 2:
	//case 2
	for( i=0;i<5;i++)
	{
		cout<<"Enter value"<<i+1<<" : ";
		cin>>arr[i];
	}
for( i=0;i<5;i++)
//main part
	
	 max=arr[0];
for( i=0;i<5;i++)
{
	if(max<arr[i])

	{
		max=arr[i];
		
	}
	cout<<"Max value is"<<max;
}
break;
case 3:
	//case 3




for( i=0;i<5;i++)
{
cout<<"Enter Value"<<i+1<<":";
cin>>arr[i];
}
cout<<"Values are:"<<endl;
for( i=0;i<5;i++)
{
	cout<<arr[i]<<"\t";
}

cout<<"\nsearch the number is present in array or not : ";
cin>>x;
	
bool flag;
for( i=0;i<5;i++)
{
	if(x==arr[i]){
	
		flag++;
		}

		if (flag==1)
	cout<<"\nValue found";
	else
	{
		cout<<"Value not found";
	}
}
break;
case 4:
	//case 4
	



for(int i=0;i<5;i++)
{
cout<<"Enter Value"<<i+1<<":";
cin>>arr[i];
}
cout<<"Values are:";
for( i=0;i<5;i++)
{
	cout<<arr[i]<<"\t";
}

cout<<"\nCheck the number : ";
cin>>x;
count=0;	

for( i=0;i<5;i++)
{
	if(x==arr[i]){
	
count++;
	cout<<"\nThe no is repeating:"<<count;
}
}
break;
case 5:
	//case 5
	

	for( i=0;i<5;i++)
	{
		cout<<"Enter value"<<i+1<<" : ";
		cin>>arr[i];
	}

 oddNo=arr[0];
for( i=0;i<5;i++)
{
	if(arr[i]%2!=0)
	{
		oddNo=arr[i];
	}
cout<<"\nOdd no is :"<<oddNo;
}
break;
case 6:
	//case 6
	

	for( i=0;i<5;i++)
	{
		cout<<"Enter value"<<i+1<<" : ";
		cin>>arr[i];
	}

 evenNo=arr[0];
for( i=0;i<5;i++)
{
	if(arr[i]%2==0)
	{
		evenNo=arr[i];
	}
cout<<"\nEven no is :"<<evenNo;
}
break;
case 7:
	//case 7
	
	for(i=0;i<5;i++)
	{
		cout<<"Enter value"<<i+1<<" : ";
		cin>>arr[i];
	}

 sum=0;
for(i=0;i<5;i++)
{
	

		sum=sum+arr[i];
	}
cout<<"\nSum of array is :"<<sum;
break;


case 8:
	//case 8
	

	for( i=0;i<5;i++)
	{
		cout<<"Enter value"<<i+1<<" : ";
		cin>>arr[i];
	}

 
for( i=5;i>=0;i--)
{
	if(reverse=arr[i])
	
	

cout<<"\nReverse an array :"<<reverse<<endl;
}
break;
case 9:
	//case 9
	 int arr[100];
 
    //Reads size of the array
    cout<<"Enter size of array: ";
    cin>>size;
 
    //Reads elements in array
    cout<<"Enter elements in array: ";
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }
for(i=0; i<size; i++)
    {
        // Assuming  cuurent element is unique */
        isUnique = 1;
 
        for(j=i+1; j<size; j++)
        {
 
            //If any duplicate element is found
 
            if(arr[i]==arr[j])
            {
                // Removing duplicate element
                for(k=j; k<size-1; k++)
                {
                    arr[k] = arr[k+1];
                }
 
                size--;
                j--;
                isUnique = 0;
            }
        }
 
        /*
        If array element is not unique
        then also remove the current element
         */
        if(isUnique != 1)
        {
            for(j=i; j<size-1; j++)
            {
                arr[j] = arr[j+1];
            }
 
            size--;
            i--;
        }
    }
    //Printing all unique elements in array
    cout<<"All unique elements in the array are: ";
    for(i=0; i<size; i++)
    {
       cout<<arr[i]<<"\t";
    }




}return 0;
}









































































































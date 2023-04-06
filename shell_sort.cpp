#include<iostream>
using namespace std;

void shellsort(int arr[],int n)
{
	
	for(int gap=n/2;gap>0;gap/=2)
	{
		for(int j=gap;j<n;j+=1)
		{
			int temp=arr[j];
			int i=0;
			
			for(i=j;(i>=gap)&&(arr[i-gap]>temp);i-=gap)
			{
				arr[i]=arr[i-gap];
			}
		
		   arr[i]=temp;
		}
	}
}
int main()
{
	int myarr[20];
	int size;
	cout<<"Enter the number of elements in array: ";
	cin>>size;
	for(int i=0;i<size;i++)
	{
		cin>>myarr[i];
	}
	cout<<"The array before sorting:"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<myarr[i]<<"  ";
	}
	cout<<""<<endl;
	
	shellsort(myarr,size);
	
	cout<<"Array after sorting:"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<myarr[i]<<"  ";
	}
	return 0;
}

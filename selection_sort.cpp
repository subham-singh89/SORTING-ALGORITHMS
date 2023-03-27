#include<iostream>
using namespace std;

void selection_sort(int arr[])
{
	int mid;
	for(int i=0;i<5;i++)
	{
		mid=i;
		for(int j=i+1;j<5;j++)
		{
			if(arr[j]<arr[mid])
			{
				mid=j;
			}
		}
		
		if(mid!=i)
		{
			int x;
			x=arr[mid];
			arr[mid]=arr[i];
			arr[i]=x;
		}
	}
	cout<<"Sorted array will be:"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<"  ";
	}
}
int main()
{
	int myarr[5];
	int i;
	cout<<"Enter the elements of the array"<<endl;
	for(i=0;i<5;i++)
	{
		cin>>myarr[i];
	}
	selection_sort(myarr);
	return 0;
}

#include<iostream>
using namespace std;

void counting_sort(int arr[],int s,int r)
{
	int count_array[r];
	int outputarray[s];
	for(int i=0;i<r;i++)
	{
		count_array[i]=0;
	}
	
	for(int i=0;i<s;i++)
	{
		++count_array[arr[i]];
	}
	
	for(int i=0;i<r;i++)
	{
		count_array[i]=count_array[i]+count_array[i-1];
	}
	
	for(int i=0;i<s;i++)
	{
		outputarray[--count_array[arr[i]]]=arr[i];
	}
	
	for(int i=0;i<s;i++)
	{
		arr[i]=outputarray[i];
	}
	
}
int main()
{
	int myarr[20];
	int size;
	int range=100;
	cout<<"Enter the size of array:";
	cin>>size;
	cout<<"Enter the range of the array:";
	cin>>range;
	cout<<"Enter "<<size<<" elements of array between 0-100:"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>myarr[i];
	}
	cout<<"Array before sorting:"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<myarr[i]<<"  ";
	}
	cout<<""<<endl;
	counting_sort(myarr,size,range);
	cout<<"Array after sorting:"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<myarr[i]<<"  ";
	}
}

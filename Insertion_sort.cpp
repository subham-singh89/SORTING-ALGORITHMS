#include<iostream>
using namespace std;

void insertion_sort(int arr[])
{
	int key=0, j=0;
	for(int i=1;i<6;i++)
	{
		key=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
	
}

int main()
{
	int myarr[6];
	cout<<"Enter elements of the array"<<endl;
	for(int i=0;i<6;i++)
	{
		cin>>myarr[i];
	}
		cout<<"Array before sorting is"<<endl;
	for(int i=0;i<6;i++)
	{
		cout<<myarr[i]<<"  ";
	}
	cout<<""<<endl;
	
	insertion_sort(myarr);
	cout<<"Array after sorting is"<<endl;
	for(int i=0;i<6;i++)
	{
		cout<<myarr[i]<<"  ";
	}
	return 0;
}

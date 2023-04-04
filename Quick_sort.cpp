#include<iostream>
using namespace std;

int partition(int arr[],int s,int e)
{
	int pivot=arr[e];
	int pindex=s;
	
	for(int i=s;i<e;i++)
	{
		if(arr[i]<pivot)
		{
			int temp=arr[i];
			arr[i]=pivot;
			pivot=temp;
			pindex++;
		}
	}
	int temp=arr[e];
	arr[e]=arr[pindex];
	arr[pindex]=temp;
	return pindex;
}

void quicksort(int arr[],int s,int e)
{
	if(s<e)
	{
		int p=partition(arr,s,e);
		quicksort(arr,s,(p-1));//Quick sort called recursively on left hand side
		quicksort(arr,(p+1),e);//Quick sort called recursively on right hand side
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
	
	quicksort(myarr,0,(size-1));
	
	cout<<"Array after sorting:"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<myarr[i]<<"  ";
	}
	return 0;
}

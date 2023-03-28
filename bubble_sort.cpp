#include<iostream>
using namespace std;
//main bubble sort algoithm
//not the optimized one
void bubble_sort(int arr[])
{
    int i,j;
    for(i=0;i<6;i++)
    {
        for(j=0;j<5;j++)
        {
            if(arr[j+1]>arr[j])
            {
                int x;
                x=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=x;
            }
        }
    }
}
int main()
{
    int myarr[6];
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<6;i++)
    {
        cin>>myarr[i];
    }
    cout<<"Array before sorting "<<endl;
    for(int i=0;i<6;i++)
    {
        cout<<myarr[i]<<"  ";
    }
    cout<<""<<endl;
    bubble_sort(myarr);
    cout<<"Array after sorting "<<endl;
    for(int i=0;i<6;i++)
    {
        cout<<myarr[i]<<"  ";
    }

}

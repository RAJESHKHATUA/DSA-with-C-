#include <iostream>
using namespace std;

void selection_sort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int min=i;
        for(int j = i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            swap(arr[i],arr[j]);
        }
        
    }
}

void printArray(int arr[],int n)
{
    for(int i =0;i<n;i++)
    {
    cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[6] = {5,4,3,2,1,0};
    int n = 6;
    cout<<"before sorting"<<endl;
    printArray(arr,n);
    selection_sort(arr,n);
    cout<<"after sorting"<<endl;
    printArray(arr,n);
}
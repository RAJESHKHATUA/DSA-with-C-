#include <iostream>
#include <chrono>
using namespace std;

typedef chrono::milliseconds MSEC;
typedef chrono::high_resolution_clock HRC;

void PrintArray(int arr[],int n)
{ 
    for (int i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void bubbleSort(int arr[],int n)
{
  for (int i =0;i<n;i++)
  { 
    int flag =0;
    for(int j=1;j<n-i;j++)
    {
        if(arr[j-1]>arr[j])
         {
            swap(arr[j],arr[j-1]);
            flag =1;
         }
         if(!flag)
            break;
    }
  }

}

int main()
{  auto start = HRC::now();
    int arr[10] ={12,11,10,9,8,7,6,5,4,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"printing before sorting "<<endl;
    PrintArray(arr,n);
    bubbleSort(arr,n);
    cout<<"printing after sorting"<<endl;
    PrintArray(arr,n);
    auto end = HRC::now();
    auto duration =chrono::duration_cast<MSEC>(end-start);
    cout<<"Code took "<<duration.count()<<" msec time";
}
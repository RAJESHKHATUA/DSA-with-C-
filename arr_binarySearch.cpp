#include  <iostream>
using namespace std;

int binarySearch(int arr[],int n,int key)
{
    int s=0;
    int mid;

    while( s<=n )
    {
        mid = s + (n-s)/2;
        if(arr[mid]==key)
         return mid;
        else if(arr[mid]>key)
         n = mid-1;
        else 
         s=mid +1;

    }
    return -1;
}
int main()
{
    int arr[10]= {1,2,4,6,7,8};
    int n = 6;
    int key;
    cout<<"enter the key"<<endl;
    cin>>key;
    if(binarySearch(arr,n,key)!=-1)
        cout<<"key is at index "<<binarySearch(arr,n,key)<<endl;
        else
        cout<<"key is not in the array"<<endl;
}

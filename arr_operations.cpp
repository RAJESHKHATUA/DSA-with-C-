#include <iostream>
using namespace std;

//printing array function
void printarray(int arr[],int n)
{   cout<<"printing array"<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<endl;
}
//inserting an element
void insert(int arr[],int k,int size,int &n)
{
    if (n>size)
        cout<<"inserting not possible"<<endl;
    else 
    {
        arr[n]=k;
    }
    n++;
}
//reversing an array
void reverse(int arr[], int size)
    { int st=0;
      int end=size-1;
        while(st<end)
        {
            swap(arr[st],arr[end]);
            st++;
            end--;
        }
    }
    //deleting an element
    void delete_ele(int *arr,int k,int &n)
    {
        for(int i = k-1;i<n-1;i++){
            arr[i]=arr[i+1];
        }
        n--;
    }
int main()
{
    int arr[10]={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int n = 5;
    int k = 1;
       //insert(arr,k,size,n);
      //reverse(arr,n);
     //delete_ele(arr,k,n);
    printarray(arr,n);
}
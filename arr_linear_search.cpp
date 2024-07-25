#include <iostream>
using namespace std;


int linearSearch(int arr[],int key,int n)
{
    for(int i=0;i<n;i++)
        if(arr[i]==key)
        return i;
  return -1;
}
int main(){
    int arr[10]={1,2,3,4,5,6};
    int n = 6;
    int key;
    cout<<"enter the key "<<endl;
    cin>>key;
 if (linearSearch(arr,key,n)==-1)
        cout<<"element is not in the array"<<endl;
    else
        cout<<"key is at index "<<linearSearch(arr,key,n)<<endl;
}
#include  <iostream>
using namespace std;

int main ()
{
    int i = 10;
    int *ptr = &i;
     int  *pt = ptr +1;
    int arr[10] = {1,3,5,7,9};
    /*cout <<"1st address  "<< arr<<endl;
     cout <<"1st address value  "<< *arr+1<<endl;
    cout <<"2nd address  "<< arr+1<<endl;  
    cout <<"2nd address value  "<< *(arr+1)<<endl;*/
    cout <<"pointer value *ptr "<<*ptr<<endl;
    cout <<"variable address value ptr  "<<ptr<<endl;
    cout <<"pointer value *pt"<<pt<<endl;
}
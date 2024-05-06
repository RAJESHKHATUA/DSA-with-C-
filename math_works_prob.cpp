#include <iostream>
using namespace std;
int find_days(int p,int k,int a)
{
    int days;
if(k<=a)
return -1;
else {
days = (p/(k-a));
return days;
}
}
int main ()
{   
    int p,k,a;
    cout<<"enter p k a values\n";
    cin>>p>>k>>a;
    
    if(find_days(p,k,a) == -1)
    cout<<"its not impossible\n";
    else
    cout<<"the num of days "<<find_days(p,k,a)<<endl;
    



}
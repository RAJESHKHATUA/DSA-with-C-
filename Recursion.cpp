#include <iostream>
using  namespace std;

//power of 2 code 
int power_of_2(int j)
{
 if (j==0)
 return 1;
 
 return 2 *power_of_2(j-1);
}
//factorial using recursion
int fact(int n){
if (n == 0)
return 1;

return  n *fact(n-1);

}

//fibonacci series
int fibonacci(int n){
if (n==1)
return 0;
if (n==2)
return 1;

return fibonacci(n-1) + fibonacci(n-2);
}

//-------------**-----------**------------**----------//
int main(){
   int n;
   cout<< " Give the input value  n "<<endl;
   cin>>n;
  // cout<<"power of 2 to the power "<< n << " is " <<power_of_2(n)<<endl;
  //cout<<"fact  of  "<< n << " is " <<fact(n)<<endl;
   cout<<" nth term of  fibonacci series "<< n << " is " <<fibonacci(n)<<endl;
}
#include <iostream>
using namespace std;

void  add_nums(int n)// max num of nums to be added is 100
{
    int arr[100];
    int sum = 0;
    cout<<"give the inputs"<<endl;
    while(n>0)
    {
        cin>>arr[n];
        sum = sum + arr[n];
        n= n-1;

    }
    cout<<"the sum is = "<<sum<<endl;
}

void calc_SI()
{
    int s,r,p,t;
    cout<<"give the Principal amount"<<endl;
    cin>>p;
    cout<<"mention the rate of interest"<<endl;
    cin>>r;
    cout<<"mention the time duration"<<endl;
    cin>>t;
    s=(p*r*t)/100;
    cout<<"The simple interest is "<<s<<endl;

}

void even_or_odd()
{
    int num;
    cout<<"enter the number for odd or even check"<<endl;
    cin>>num;
    if( num%2 ==0 )
    cout<<"The given number is even"<<endl;
    else
    cout<<"The given number is odd"<<endl;
}
void pos_or_neg()
{
    int num,n=0;
    cout<<"enter a num to verify\n";
    cin>>num;
    if (num > n)
    cout<<"The given num"<<num<< "is positive\n";
    else if( num == n)
    cout<<"The given num is neither positive nor negative\n";
    else
    cout<<"The given num is negative\n";
}
void valid_triangle()
{
    int a,b,c,s1,s2,s3;
    cout<<"enter the nums\n";
    cin>>a>>b>>c;
    s1 = a+b;
    s2 = b+c;
    s3 = a+c;
    if( s1 > c && s2 > a && s3 > b )
    cout<<"the triangle is valid\n";
    else 
    cout<<"The triangle is invalid\n";

}
void print_even()
{   int n,num = 2;
    cout<<"enter the max num\n";
    cin>>n;
    cout<<" The even series is \n";
    while(num<n)
    {   
        cout<<num<<endl;
        num = num + 2;
    }
}
void print_odd()
{
    int n,num = 1;
    cout<< "enter the max num\n";
    cin>>n;
    cout<< "The odd series is\n";
    while(num<n)
    {
        cout<<num<<endl;
        num = num + 2;
    }
}
void sum_1_to_n()
{
    int n,sum=0;
    cout<<"Enter the max num\n";
    cin>>n;
    while(n>0)
    {
        sum = sum + n;
        n--;
    }
    cout<<"The sum of n numbers is  "<<sum<<endl;
}
void find_fact()
{   int fact=1,n;
    cout<<"enter the Num to find the factorial\n";
    cin>>n;
    while(n>0)
    {
        fact = n * fact;//10 9 8 7 6 
        n = n - 1;
    }
    cout<<"The factorial of the given num is "<<fact<<endl;

}
void prime_check()
{
    int n,num =2;
    cout <<"Enter the num"<<endl;
    cin>>n;
    while(n>num)
    {
        if (n%num == 0)
        {
        cout<<"The entered num is not prime\n";
        break;
        }
        else
        {
         num = num + 1;
        }
        
        cout<<"The entered num is  prime\n";
    }
    


}
int main()
{  
//int n = 10;
//add_nums(n);
//calc_SI();
//even_or_odd();
//pos_or_neg();
//valid_triangle();
//print_even();
//print_odd();
//sum_1_to_n();
//find_fact();
prime_check();
}
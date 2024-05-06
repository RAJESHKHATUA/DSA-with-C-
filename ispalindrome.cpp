#include <iostream>
#include <string>

using namespace std;


    bool isPalindrome(int x) 
    {

        string str = to_string(x);
        int s = 0;
        int end = str.length()-1;
        //cout<<end<<endl;
        
        while(s<=end)

        {
            if (str[s]!=str[end])
                 return 0;
                 s++;
                 end--;
        }
        return 1;


    }
    int main ()
        {
           
           int x;
           cout<<"Palindrome check , enter the num :\n";
           cin>>x;



           if( isPalindrome(x))
           cout<<"The entered num is a palindrome\n";
           else 
           cout<<"The entered is not a palindrome\n";


           return 0;
        }

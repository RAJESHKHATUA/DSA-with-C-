#include<iostream>
#include<string>
#include<stack>
using namespace std;
bool isvalid(stack<char>&s){
     while(s.top()!=')')
     {
        if (s.top() == '+' || s.top() == '-' || s.top() == '*' || s.top() == '/')
        {
            s.pop();
            if(s.top()=='(')
                s.pop();
        }
        if(s.empty())
        return true;
        else
        return false;
     }
}
bool solve(stack<char>&s,string st,int i){
     if(st[i]==')'){
         if(s.empty())
         return false;
         else{
            if(!isvalid(s))
             return false;
         }
     }
     s.push(st[i]);
     solve(s,st,i+1);
     return true;
}
int main(){
    stack<char>s;
    string st="(a+b)";
    bool v=true;
    int i=0;
    if(solve(s,st,i))
    cout<<"not redundant\n";
    else
    cout<<"is redundant\n";
    
}
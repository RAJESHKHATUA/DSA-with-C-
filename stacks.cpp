#include <iostream>
#include <string>
#include  <stack>
using namespace std;
/*

bool is_redundant(stack <char> s,string &str,int i){
    if(s.empty())
    return true;
    else if(!s.empty() && i==str.length())
    return false;
    char ch = str[i];
    if(ch=='(' || ch == '+' || ch == '-' || ch == '*')
    {
        s.push(ch);
    }
    else if(ch == ')' )
    {
        if ( s.top()=='+' || s.top() == '-' || s.top() == '*' || s.top() == '/')
        s.pop();
        if ( s.top()== '(')
        s.pop();
        
    }
    else
    is_redundant(s,str,(i+1));
   if(!s.empty() && i==str.length())
    return false;
}
   int main()
   { 
    stack <char> s;
    string str ="((a+b))";
     int i = 0;
     char ch =str[i];
     s.push(ch);
     if(is_redundant(s,str,(i+1)))
     cout<<"is Redundant\n";
     else 
     cout<<" is not redundant\n";
   }
   #include <iostream>
#include <string>
#include <stack>
using namespace std;

bool is_redundant(const string &str) {
    stack<char> s;
    for (char ch : str) {
        if (ch == ')') {
            bool has_operator = false;
            while (!s.empty() && s.top() != '(') {
                if (s.top() == '+' || s.top() == '-' || s.top() == '*' || s.top() == '/') {
                    has_operator = true;
                }
                s.pop();
            }
            s.pop(); // pop '('
            if (!has_operator) {
                return true; // Redundant parentheses found
            }
        } else {
            s.push(ch);
        }
    }
    return false; // No redundant parentheses found
}

int main() {
    string str = "((a+b))";
    if (is_redundant(str)) {
        cout << "Redundant\n";
    } else {
        cout << "Not redundant\n";
    }
    return 0;
}
*/
void insert(stack <int> &s,int x){
    if(s.empty())
    s.push(x);
    else{
        int num=s.top();
        s.pop();
        insert(s,x);
        //BT
        s.push(num);
    }
}
void reverse(stack <int> &s){
    if(s.empty()){
        return;
    }
   int x=s.top();
   s.pop();
   reverse(s);
   insert(s,x);
}
int main()
{
    //reverse a stack
  /* string str = "Hello";
    cout<<str<<endl;
    stack <char> s;
    for(char ch : str)
      s.push(ch);
      char out[5];
      int i=0;
    while(!s.empty())
    {  
      out[i] = s.top();
      s.pop();
      i++;

    }
    for(char chr : out)
    cout<<chr;
 cout<<endl;
    return 0;*/
    stack<int> nat_num;
    nat_num.push(2);
    nat_num.push(3);
    nat_num.push(4);
    nat_num.push(5);
    cout<<nat_num.top()<<endl;
    reverse(nat_num);
    cout<<nat_num.top()<<endl;

}

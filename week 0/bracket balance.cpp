#include <bits/stdc++.h>
using namespace std;

int balanced(string s)
{
    stack<char>st;
    char c;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
        st.push(s[i]);
        
        else if(st.empty())
        return 0;
        
        else{
        c=st.top();
        st.pop();
        
        if(s[i]==')')
        {
            if(c=='(')
            continue;
            else return 0;
        }
        
        if(s[i]==']')
        {
            if(c=='[')
            continue;
            else return 0;
        }
        
        if(s[i]=='}')
        {
            if(c=='{')
            continue;
            else return 0;
        }
        }
    }
    if(st.empty())
    return 1;
    else
    return 0;
}

int main()
{
    string expr="[{}()]";
    
    string expr2="({}";
    
    if(balanced(expr))
    cout<<"Expr is balance";
    else
    cout<<"Expr is  not balance";
    
    if(balanced(expr2))
    cout<<"\nExpr2 is balance";
    else
    cout<<"\nExpr2 is not balance";
    
    return 0;
}
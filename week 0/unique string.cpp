#include<bits/stdc++.h>
using namespace std;

bool check(string s)
{
    int c=0;
    for(int i=0;i<s.length();i++)
    {
        int bit=s[i]-'a';
        
        if((c & (1<<bit))>0)
        return false;
        
        c=c|(1<<bit);
    }
    return true;
}

int main()
{
    string str="kiii";
    string str2="kii";
    
    if(check(str))
    cout<<str<<" unique";
    else
    cout<<str<<" not unique";
    
    cout<<endl;
    if(check(str2))
    cout<<str2<<" unique";
    else
    cout<<str2<<" not unique";
}
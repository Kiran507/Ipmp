#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[]={5,8,9,2,1};
    int b[]={0,7,3,5};
    int i=0,j=0;
    
    cout<<"UNION\n";
    
    while(i<5 && j<4)
    {
        if(a[i]<b[j])
            cout<<a[i++]<<endl;
        
        else if(a[i]>b[j])
            cout<<b[j++]<<endl;
        
        else
        {
            cout<<a[i++]<<endl;
            j++;
        }
    }
    while(i<5)
        cout<<a[i++]<<endl;
    
    while(j<4)
        cout<<b[j++]<<endl;
        
    cout<<"INTERSECTION\n";
    i=j=0;
    while(i<5 && j<4)
    {
        if(a[i]<b[j])
            i++;
        
        else if(a[i]>b[j])
            j++;
        
        else
        {
            cout<<a[i++]<<endl;
            j++;
        }
    }
    
    return 0;
}

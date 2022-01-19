#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={2,1,9,0,6,4,5,8,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    map <int,int> m;
    for(int i=0;i<n;i++)
    m[arr[i]]++;
    
    for(auto& x : m)
    {
        if(x.second==1)
        cout<<x.first<<endl;
    }
    
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={2,4,8,7,1,1,3,4,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0;i<n;i++)
    {
        if(arr[abs(arr[i])]==0)
        continue;
        else if(arr[abs(arr[i])]>0)
        arr[abs(arr[i])]=-arr[abs(arr[i])];
        else{
        cout<<abs(arr[i]);
        arr[abs(arr[i])]=0;
        }
    }
}

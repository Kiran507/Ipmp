#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {2,4,8,9,7,3,4,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    cout<<(((n+1)*(n+2))/2)-sum;
}

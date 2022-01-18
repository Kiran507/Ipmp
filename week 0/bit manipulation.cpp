#include<bits/stdc++.h>
using namespace std;

void func(int a[],int n)
{
    int temp=0;
    
    for(int i=0;i<n;i++)
        temp=temp^a[i];
    
    cout<<temp;
}

int main()
{
    int arr[]={2,4,1,5,3,9,12,5,2,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    
    func(arr,size);

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

void countingsort(int arr[],int n)
{
    int bucket[8];
    for(int i=0;i<8;i++)
    bucket[i]=0;
    
    for(int i=0;i<n;i++)
    bucket[arr[i]]++;
    
    int sum=0;
    
    for(int i=0;i<8;i++)
    {
        sum+=bucket[i];
        bucket[i]=sum;
    }
    
    int out[n];
    for(int i=0;i<n;i++)
    {
        out[bucket[arr[i]]-1]=arr[i];
        bucket[arr[i]]--;
    }
    
    for(int i=0;i<n;i++)
    printf("%d ",out[i]);
}

int main()
{
    int arr[]={4,4,3,8,9,1,2,0,3,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    countingsort(arr,size);
    return 0;
}

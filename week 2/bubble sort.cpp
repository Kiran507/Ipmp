#include<bits/stdc++.h>
using namespace std;

void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    cout<<arr[i]<<'\t';
}

void bubblesort(int arr[],int n)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        cout<<"\nIteration  "<<i+1<<endl;
        print(arr,n);
    }
}

int main()
{
    int arr[]={3,6,5,1,2,45,9,8,30};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Array\n";
    print(arr,size);
    bubblesort(arr,size);
    return 0;
}

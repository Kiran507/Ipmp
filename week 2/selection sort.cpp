#include<bits/stdc++.h>
using namespace std;

void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    cout<< arr[i] <<'\t';
}

void selectionsort(int arr[],int n)
{
    int min,temp,index;
    for(int i=0;i<n-1;i++)
    {
        min=arr[i];
        index=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<min){
            min=arr[j];
            index=j;}
        }
        temp=arr[i];
        arr[i]=arr[index];
        arr[index]=temp;
        
        cout<<"\nIteration "<<i+1<<endl;
        print(arr,n);
    }
}

int main()
{
    int arr[]={2,5,3,9,1,0,6,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Array\n";
  
    print(arr,size);
    selectionsort(arr,size);
  
    return 0;
}

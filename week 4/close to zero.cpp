#include<bits/stdc++.h>
using namespace std;

int closeToZero(int arr[], int n)
        {
            sort(arr,arr+n);
            
            int *p=arr,*q=arr+n-1,minsum=999999;
            
            while(*p<*q)
            {
                if(abs((*p + *q))<abs(minsum))
                {
                    minsum=(*p + *q);
                }
                    if(abs(*p)>abs(*q))
                    p+=1;
                    else
                    q-=1;
            }
            return minsum;
        }

int main()
{
    int arr[]={2,8,-57,-10,9,4,6};
    int n=sizeof(arr)/sizeof(arr[0]),sum=0;;
    
    cout<<closeToZero(arr,n);
}

#include<bits/stdc++.h>
using namespace std;

void pairsum(int A[],int x,int n)
{
    int *l,*r;
    sort(A,A+n);
    l=A;
    r=A+n;
    while(*l<*r){
        if((*l + *r) == x)
        {
            cout<<"The pair adding "<<x<<" is ("<<*l<<","<<*r<<")\n";
            return;
        }
        else if((*l + *r) > x)
        r--;
        else
        l++;
    }
    cout<<"No pair adds "<<x;
}

int main()
{
    int A[]={37,45,12,9,2,10,67,4};
    int x=40;
    int n=sizeof(A)/sizeof(A[0]);
    pairsum(A,x,n);
}
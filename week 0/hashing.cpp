#include<bits/stdc++.h>
using namespace std;

void pairsum(int A[],int y,int size)
{
    unordered_set<int> S;
    
    for(int i=0;i<size;i++)
    {
        if(S.find(y-A[i])==S.end())
        S.insert(A[i]);
        else
        {
            cout<<"The pair that gives sum "<<y<<" is ("<<A[i]<<","<<y-A[i]<<")";
        }
    }
}

int main()
{
    int A[]={45,5,36,18,86,24,67,36};
    int y=50;
    int n=sizeof(A)/sizeof(A[0]);
    pairsum(A,y,n);
}
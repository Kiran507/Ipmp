#include<bits/stdc++.h>
using namespace std;

int main()
{
     int arr[4][4] = { {5, 10, 15, 20},
                      {15, 20, 25, 30},
                      {15, 21, 26, 32},
                      {23, 33, 38, 45}};
                      
    int row=-1,column=-1,x=29,n=4,found=-1;
    
    if(arr[0][0]==x){
    cout<<"0,0";
    found=0;}
    
    for(int c=1;c<n;c++)
    {
        if(arr[c][c]==x){
        cout<<c<<","<<c;
        found=0;}
        
        if(arr[c][c]>x && arr[c-1][c-1]<x)
        row=column=c;
    }
    
    if(row>=0 && column>=0)
    {
        for(int i=column;i<n;i++)
        {
            if(arr[i][column-1]==x){
            cout<<i<<","<<column-1;
            found=0;}
        }
        
        for(int i=row;i<n;i++)
        {
            if(arr[row-1][i]==x){
            cout<<row-1<<","<<i;
            found=0;}
        }
    }
    
    if(found!=0)
    cout<<"Not found";
}

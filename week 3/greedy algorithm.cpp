#include<bits/stdc++.h>
using namespace std;

struct activity{
    int start,finish;
};

bool compare(activity s1,activity s2)
{
    return (s1.finish<s2.finish);
}

void greedyalgo(activity arr[],int n)
{
    int i=0;
    sort(arr,arr+n,compare);
    
    cout<<arr[i].start<<'\t'<<arr[i].finish<<endl;

    for(int j=1;j<n;j++)
    {
        if(arr[j].start>=arr[i].finish)
        {
        cout<<arr[j].start<<'\t'<<arr[j].finish<<endl;
        i=j;
        }
    }
}

int main()
{
    activity arr[]={ {3,7},{1,2},{5,8},{0,3},{9,7},{8,2} };
    int size=sizeof(arr)/sizeof(arr[0]);
    
    greedyalgo(arr,size);
    return 0;
}

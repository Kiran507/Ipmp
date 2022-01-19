#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={2,3,-6,1,-8};
    int n=sizeof(arr)/sizeof(arr[0]),sum=0;;
    
    unordered_set<int> m;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(m.find(sum)!=m.end() || sum==0){
        cout<<"Exists";
        return 0;
        }
        
        m.insert(sum);
    }
    cout<<"Doesnt exist"<<endl;
  
  return 0;
  
}

#include<bits/stdc++.h>
#include "class.h"
using namespace std;

int main()
{
    linkedlist L;
    for(int i=0;i<8;i++)
    L.insert(i*i -1);
    
    L.print();
    
    int size=L.length();
    int a[size];
    
    Node*cur=L.head;
    for(int i=0;i<size;i++)
    {
        a[i]=cur->data;
        cur=cur->next;
    }
    
    cur=L.head;
    for(int i=0;i<size;i++)
    {
        cur->data=a[7-i];
        cur=cur->next;
    }
    
    cout<<"\nAfter reversing list : "<<endl;
    L.print();
    return 0;
}

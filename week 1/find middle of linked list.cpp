#include<bits/stdc++.h>
#include "class.h"
using namespace std;


int main()
{
    linkedlist L;
    for(int i=0;i<8;i++)
    L.insert(i*i - 1);
    
    cout<<"The middle element is ";
    Node *cur=L.head;
    for(int i=0;i<L.length()/2;i++)
    cur=cur->next;
    cout<<cur->data;
    
    L.deletenode(6);
    cout<<endl;

    cout<<"The middle element is : ";
    cur=L.head;
    for(int i=0;i<L.length()/2;i++)
    cur=cur->next;
    cout<<cur->data;
  
    return 0;
}

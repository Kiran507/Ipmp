#include<bits/stdc++.h>
#include "class.h"
using namespace std;

void merge(Node * a,Node * b)
{
    linkedlist C;
    
    while(a!=NULL && b!=NULL)
    {
        if(a->data<b->data)
        {
            C.insert(a->data);
            a=a->next;
        }
        else
        {
            C.insert(b->data);
            b=b->next;
        }
    }
    
    while(a!=NULL)
    {
        C.insert(a->data);
        a=a->next;
    }
    
    while(b!=NULL)
    {
        C.insert(b->data);
        b=b->next;
    }
    
    cout<<"\nAfter merging : ";
    C.print();
}

int main()
{
    linkedlist A;
    linkedlist B;
    
    A.insert(4);
    A.insert(7);
    A.insert(78);
    A.insert(10);
    
    B.insert(7);
    B.insert(45);
    B.insert(5);
    
    cout<<"A : ";
    A.print();
    cout<<"\nB : ";
    B.print();
    
    merge(A.head,B.head);
}

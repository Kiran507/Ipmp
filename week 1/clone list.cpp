#include<bits/stdc++.h>
#include "class.h"
using namespace std;

int main()
{
    linkedlist L;
    L.insert(4);
    L.insert(5);
    L.insert(6);
    L.insert(7);
    
    L.head->arbit=L.head->next->next;
    L.head->next->arbit=L.head->next->next->next;
    L.head->next->next->arbit=L.head->next;
    L.head->next->next->next->arbit=L.head;
    
    Node *cur=L.head;
    
    while(cur!=NULL)
    {
        Node * newnode = new Node(cur->data);
        newnode->next=cur->next;
        cur->next=newnode;
        cur=cur->next->next;
    }
    
    cur=L.head;
    
    for(int i=0;i<(L.length()/2);i++)
    {
        cur->next->arbit=cur->arbit->next;
        cur=cur->next->next;
    }
    
    Node *temp=L.head->next;
    cur=L.head;
    
    
    while(cur!=NULL)
    {
        cur->next=cur->next->next;
        cur=cur->next;
    }
    
    while(temp!=NULL)
    {
        temp->next=temp->next->next;
        temp=temp->next;
    }
    
    return 0;
}

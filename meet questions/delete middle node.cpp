#include<bits/stdc++.h>
#include"class.h"
using namespace std;

int main()
{
    linkedlist l;
    for(int i=0;i<10;i++)
    l.insert(i);
    
    l.print();
    
    cout<<endl;
    Node*access = l.head->next->next;
    
    Node*temp=access->next;
    access->data=temp->data;
    access->next=temp->next;
    temp->next=NULL;
    free(temp);
    
    l.print();
    return 0;
}

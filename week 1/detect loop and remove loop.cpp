#include<bits/stdc++.h>
#include "class.h"
using namespace std;

void detect_remove_loop(Node *cur)
{
    if(cur->next==NULL)
    {
        printf("There is no loop");
        return;
    }
    if(cur->next->flag==1)
    {
        printf("Loop is detected and removed");
        cur->next=NULL;
        return;
    }
    cur->flag=1;
    detect_remove_loop(cur->next);
}

int main()
{
    linkedlist L;
    L.insert(4);
    L.insert(5);
    L.insert(6);
    L.insert(7);
    L.head->next->next->next->next=L.head->next;
    
    detect_remove_loop(L.head);
    L.print();
}

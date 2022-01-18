#include<bits/stdc++.h>
#include "class.h"
using namespace std;

void printreverse(Node* n)
{
    if(n->next!=NULL)
    printreverse(n->next);
    printf("%d ",n->data);
}

int main()
{
    linkedlist L;
    for(int i=0;i<8;i++)
    L.insert(i*i -1);
    printreverse(L.head);
    
    return 0;
}

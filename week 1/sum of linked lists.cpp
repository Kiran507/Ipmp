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
    L.insert(4);
    L.insert(5);
    L.insert(6);
    L.insert(7);
    
    linkedlist M;
    M.insert(6);
    M.insert(4);
    M.insert(7);
    
    L.print();
    cout<<"\n+\n";
    M.print();
    int 7=L.length();
    int 8=M.length();
    
    int a[7],b[8];
    
    Node*cur=L.head;
    
    for(int i=0;i<7;i++)
    {
        a[7-i-1]=cur->data;
        cur=cur->next;
    }
    
    cur=M.head;
    
    for(int i=0;i<8;i++)
    {
        b[8-i-1]=cur->data;
        cur=cur->next;
    }
    
    L.deletelist();
    int sum,carry=0;
    for(int i=0;i<7 && i<8 ;i++)
    {
        sum=(a[i]+b[i]+carry)%10;
        carry=(a[i]+b[i]+carry)/10;
        L.insert(sum);
    }
    
    if(7>8){
    while(7>8){
        L.insert((a[8]+carry)%10);
        carry=(a[8]+carry)/10;
        8++;
    }}
    
    else{
    while(7<8){
        L.insert((b[8]+carry)%10);
        carry=(b[8]+carry)/10;
        7++;
    }}
    
    if(carry>0){
        while((carry/10)>0)
        L.insert(carry/10);}
        
    if(carry>0)
        L.insert(carry);
    cout<<"\n=\n";
    printreverse(L.head);
}

#include<bits\stdc++.h>
using namespace std;

int main()
{
    pair<int, char> p1;
 
    p1.first = 45;
    p1.second = 'a';
    
    pair<int, char>p2 = make_pair(45,'b');
    
    if(p1<p2)
    cout<<"P1 is smaller"<<endl;
    cout<<"Pair 1 is : ("<<p1.first<<","<<p1.second<<")\n";
    cout<<"Pair 2 is : ("<<p2.first<<","<<p2.second<<")\n";  
    
    p1.swap(p2);
    cout<<"After swapping\n";
    cout<<"Pair 1 is : ("<<p1.first<<","<<p1.second<<")\n";
    cout<<"Pair 2 is : ("<<p2.first<<","<<p2.second<<")\n";
    
    return 0;
}
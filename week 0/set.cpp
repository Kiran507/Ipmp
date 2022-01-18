#include<bits\stdc++.h>
using namespace std;

int main()
{
	set<int> s;

	for(int i=1;i<=4;i++)
	s.insert(i);

	set<int>::iterator itr;
	cout << "The set s is: \n";
	for (itr = s.begin(); itr != s.end(); itr++)
		cout << *itr<<" ";
	cout << endl;
 
    cout<<"Size is :"<<s.size()<<endl;

	auto pos=s.find(4);
	cout<<*pos<<endl;
	
	auto pos2=s.find(25);
	cout<<*pos2<<endl;

    s.erase(4);
    
    for (itr = s.begin(); itr != s.end(); itr++)   
		cout << *itr<<" ";
	
	cout << "\ns1.lower(4) : \n"<< *s.lower_bound(4)<< endl;
    cout << "s1.upper(4) : \n"<< *s.upper_bound(4)<< endl;

	s.clear();
	cout<<"\nSize is : "<<s.size()<<endl;

    return 0;
}
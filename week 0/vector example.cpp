#include<iostream>
#include<vector>
using namespace std;

void func(vector<int> &vect)
{
   vect.push_back(200);
}

int main()
{
	vector<int> vect{1,4,5};
	for (auto i = vect.begin(); i != vect.end(); i++)
        cout << *i << " ";
        
    cout<<"\nSize is "<<vect.size()<<endl;
    
    if(vect.empty())
    cout<<"Vector is empty"<<endl;
    else
    cout<<"Vector is not empty"<<endl;
    
    vect.push_back(7);
    cout<<vect.back()<<endl;
    vect.push_back(8);
    cout<<vect.back()<<endl;
    
    vect.pop_back();
    cout<<vect.back()<<endl;
	
	vect.clear();
	cout<<"Size is "<<vect.size()<<endl;
	
	for (int i = 1; i <= 10; i++)
        vect.push_back(i);
        
    cout<<"At 5:"<<vect.at(2)<<endl;
    vect.erase(vect.begin()+2);
    cout<<"After erase at 5:"<<vect.at(5)<<endl;
    
    vect.insert(vect.begin()+4,100);
    cout<<vect.at(4)<<endl;
   
    func(vect);
    cout<<vect.back();

    return 0;
}
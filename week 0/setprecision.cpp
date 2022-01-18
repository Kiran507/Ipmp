

//setprecision

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    
    double a=254.78919 , b=318.45601;
    
    cout<<fixed<<setprecision(2);
    cout<<"a is : "<<a
        <<"\na is : "<<setprecision(4)<<a 
        <<"\nb is : "<<setprecision(2)<<b
        <<"\nb is : "<<setprecision(3)<<b;
        

    return 0;
}

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string name = "Manoj";
    cout<<"The name is "<<name<<endl;
    cout<<"The lenth of name is "<<name.length()<<endl;
    cout<<"The name is "<<name.substr(0,3)<<endl;
    cout<<"The name is "<<name.substr(2,4)<<endl;
    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter your Age:"<<endl;
    cin>>age;
    if (age>150 || age<5)
    {
        cout<<"Invalid age";
    }
    else if (age>=18)
    {
        cout<<"You can vote";
    }
    else
    {
        cout<<"You cannot vote";
    }
    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    // int arr[] = {1, 3, 6};
// Arrays Index   0  1  2
    // cout<<arr[2];
    int marks[6];
    for (int i = 0; i < 6; i++)
    {
        cout<<"Enter the marks of "<<i<<"th student"<<endl;
        cin>>marks[i];
    }
    for (int i = 0; i < 6; i++)
    {
        cout<<"Marks of "<<i<<"th student is "<<marks[i]<<endl;
    }
    return 0;
}
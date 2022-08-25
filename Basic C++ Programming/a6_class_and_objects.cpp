#include<iostream>
#include<string.h>
using namespace std;

class Employee{
    public:
     string name;
     int salary;

     void printDetails()
     {
      cout<<"The name of our first employee is "<<this->name<<" and his salary is "<<this->salary<<" Rupees."<<endl;
     }
};

int main()
{
    Employee har;
    har.name = "Manoj";
    har.salary = 135000;
    har.printDetails();
    // cout<<"The name of our first employee is "<<har.name<<" and his salary is "<<har.salary<<" Rupees"<<endl;
}
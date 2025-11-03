#include <iostream>
using namespace std;
class Person 
{
public:
    Person() 
	{
        cout << "Person's constructor called" << endl;
    }
};

class Faculty : public Person 
{
public:
    Faculty() 
	{
        cout << "Faculty's constructor called" << endl;
    }
};

class Student : public Person 
{
public:
    Student() 
	{
        cout << "Student's constructor called" << endl;
    }
};

class TA : public Faculty, public Student 
{
public:
    TA() 
	{
        cout << "TA's constructor called" << endl;
    }
};

int main() 
{
    cout<<"Name : Shreyash Mangesh Kapade"<<endl;
    cout<<"Roll : 99"<<endl;
    cout<<"Batch : S4"<<endl;
    cout<<"Div : SY B"<<endl;
    cout<<"Department : CSE"<<endl;
    TA ta; 
    return 0;
}

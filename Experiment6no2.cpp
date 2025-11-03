#include <iostream>
using namespace std;
class Vehicle 
{
public:
    Vehicle() 
	{
	 cout << "This is a Vehicle\n"; 
	}
};

class Car : public Vehicle 
{
public:
    Car() 
	{ 
	 cout << "This Vehicle is Car\n"; 
	}
};

class Bus : public Vehicle 
{
public:
    Bus() 
	{ 
	 cout << "This Vehicle is Bus\n"; 
	}
};

int main()
{
    cout<<"Name : Shreyash Mangesh Kapade"<<endl;
    cout<<"Roll : 99"<<endl;
    cout<<"Batch : S4"<<endl;
    cout<<"Div : SY B"<<endl;
    cout<<"Department : CSE"<<endl;
    Car obj1;
    Bus obj2;
    return 0;
}

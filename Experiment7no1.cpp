// C++ program to illustrate the multiple inheritance
#include <iostream>
using namespace std;
class Vehicle {
public:
	Vehicle() { cout << "This is a Vehicle\n"; }
};

class FourWheeler {
public:
	FourWheeler() { cout << "This is a 4 Wheeler\n"; }
};
class Car: public Vehicle, public FourWheeler {
public:
	Car() { cout << "Car Class\n"; }
};

int main()
{
    cout<<"Name : Shreyash Mangesh Kapade"<<endl;
    cout<<"Roll : 99"<<endl;
    cout<<"Batch : S4"<<endl;
    cout<<"Div : SY B"<<endl;
    cout<<"Department : CSE"<<endl;

Car obj;
return 0;
}
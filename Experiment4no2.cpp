// C++ program to illustrate Constructor overloading
#include <iostream>
using namespace std;
class construct
{
public:
	float area;
// Constructor with no parameters
construct()
{
	area=0;
}

// Constructor with two parameters
construct(int a, int b)
{
	area = a * b;
}
void disp()
{
	cout<< area<< endl;
	}
};
int main()
{
    cout<<"Name : Shreyash Mangesh Kapade"<<endl;
    cout<<"Roll : 99"<<endl;
    cout<<"Batch : S4"<<endl;
    cout<<"Div : SY B"<<endl;
    cout<<"Department : CSE"<<endl;
// Constructor Overloadingwith two different constructors of class name
construct o;
construct o2(10, 20);
o.disp();
o2.disp();
return 0;
}
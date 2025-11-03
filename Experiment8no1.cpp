// C++ program to show unary operator overloading
#include <iostream>
using namespace std;
class Distance {
public:
    int feet, inch;
    // Constructor to initialize the object's value
    Distance(int f, int i)
    {
        this->feet = f;
        this->inch = i;
    }
    // Overloading(-) operator to perform decrement operation of Distance object
    void operator-()
    {
        feet--;
        inch--;
        cout << "\nFeet & Inches(Decrement): " << feet << "'" << inch;
    }
};
// Driver Code
int main()
{
    cout << "Name : Shreyash Mangesh Kapade" << endl;
    cout << "Roll : 99" << endl;
    cout << "Batch : S4" << endl;
    cout << "Div : SY B" << endl;
    cout << "Department : CSE" << endl;
    Distance d1(8, 9);
    -d1;
    return 0;
}
#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    // Friend declarations
    friend ostream & operator << (ostream &out, const Complex &c);
    friend istream & operator >> (istream &in, Complex &c);
};

// Overloading the insertion operator (<<)
ostream & operator << (ostream &out, const Complex &c)
{
    out << c.real << "+i" << c.imag;   // Removed endl to avoid extra blank line
    return out;
}

// Overloading the extraction operator (>>)
istream & operator >> (istream &in, Complex &c)
{
    cout << "Enter Real Part: ";
    in >> c.real;
    cout << "Enter Imaginary Part: ";
    in >> c.imag;
    return in;
}

int main()
{
    cout << "Name : Shreyash Mangesh Kapade" << endl;
    cout << "Roll : 99" << endl;
    cout << "Batch : S4" << endl;
    cout << "Div : SY B" << endl;
    cout << "Department : CSE" << endl;

    Complex c1;
    cin >> c1;

    cout << "The complex object is " << c1 << endl;

    return 0;
}

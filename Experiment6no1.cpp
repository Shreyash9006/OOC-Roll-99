#include <iostream>
using namespace std;

class Student 
{
    int roll;
    char name[25];

public:
    void getdata() 
	{
        cout << "\n------------------";
        cout << "\n Enter Roll No.: ";
        cin >> roll;
        cout << " Enter Student Name: ";
        cin >> name;
    }

    void putdata() {
        cout << "\n-------------------";
        cout << "\n********* Student Marklist ********";
        cout << "\n----------------";
        cout << "\n Roll No.: " << roll;
        cout << "\n Student Name: " << name << endl;
    }
};

class StudentExam : public Student 
{
public:
    int sub1, sub2, sub3, sub4, sub5, sub6;
    float per;

    void accept_data() 
	{
        getdata();
        cout << "\n Enter Marks for Subject 1: ";
        cin >> sub1;
        cout << " Enter Marks for Subject 2: ";
        cin >> sub2;
        cout << " Enter Marks for Subject 3: ";
        cin >> sub3;
        cout << " Enter Marks for Subject 4: ";
        cin >> sub4;
        cout << " Enter Marks for Subject 5: ";
        cin >> sub5;
        cout << " Enter Marks for Subject 6: ";
        cin >> sub6;
    }

    void display_data() 
	{
        putdata();
        cout << "\n Marks of Subject 1: " << sub1;
        cout << "\n Marks of Subject 2: " << sub2;
        cout << "\n Marks of Subject 3: " << sub3;
        cout << "\n Marks of Subject 4: " << sub4;
        cout << "\n Marks of Subject 5: " << sub5;
        cout << "\n Marks of Subject 6: " << sub6;
    }
};

class StudentResult : public StudentExam 
{
public:
    void calculate() 
	{
        per = (sub1 + sub2 + sub3 + sub4 + sub5 + sub6) / 6.0;
        cout << "\n\n Total Percentage: " << per << " %" << endl;
        cout << "----------------------------\n";
    }
};

int main() 
{
    int cnt;
    cout<<"Name : Shreyash Mangesh Kapade"<<endl;
    cout<<"Roll : 99"<<endl;
    cout<<"Batch : S4"<<endl;
    cout<<"Div : SY B"<<endl;
    cout<<"Department : CSE"<<endl;

    cout << "\n Enter No. of Students You Want: ";
    cin >> cnt;

    StudentResult str[cnt];

    for (int i = 0; i < cnt; i++) 
	{
        cout << "\n\n=== Enter Details for Student " << i + 1 << " ===\n";
        str[i].accept_data();
        str[i].display_data();
        str[i].calculate();
    }

    return 0;
}

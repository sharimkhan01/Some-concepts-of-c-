#include <iostream>
using namespace std;

class Record
{

    char Name[20];
    int Reg_No;
    int marks[3];

public:
    void read()
    {
        cout << "Enter the Name,Regn Number and Marks :" << endl;
        cin >> Name >> Reg_No >> marks[0] >> marks[1] >> marks[2];
    }
    int avg_marks()
    {
        int sum = 0, avg;
        for (int i = 0; i < 3; i++)
        {
            sum += marks[i];
        }
        avg = sum / 3;
        return avg;
    }
    void display()
    {
        cout << "Name: " << Name << endl;
        cout << "Reg No. : " << Reg_No << endl;
        cout << "avg_marks: " << avg_marks();
    }

} s1;
int main()
{
    s1.read();
    s1.avg_marks();
    s1.display();

    return 0;
}
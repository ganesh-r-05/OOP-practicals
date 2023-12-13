#include <iostream>
using namespace std;

class PersonlInformation
{
public:
    class DOB
    {
    public:
        int month, date, year;
        DOB() {}
        DOB(int date, int month, int year)
        {
            this->date = date;
            this->month = month;
            this->year = year;
        }
    };
    DOB d;
    float Height, Weight;
    int id;
    string name;

    PersonlInformation()
    {
        cout << "Enter the name: ";
        cin >> this->name;

        cout << "Enter the id: ";
        cin >> this->id;

        cout << "Enter the height: ";
        cin >> this->Height;
        
        cout << "Enter the weight: ";
        cin >> this->Weight;

        cout << "Enter the date of birth date month and year respectively: ";
        int dateTemp, monthTemp, yearTemp;
        cin >> dateTemp >> monthTemp >> yearTemp;
        this->d = DOB(dateTemp, monthTemp, yearTemp);
    }

    static void display(const PersonlInformation &p)
    {
        cout << "Name   : " << p.name << endl;
        cout << "Id     : " << p.id << endl;
        cout << "Height : " << p.Height << endl;
        cout << "Weight : " << p.Weight << endl;
        cout << "DOB    : (" << p.d.date << "-" << p.d.month << "-" << p.d.year << ")" << endl;
    }
    ~PersonlInformation()
    {}
};

int main()
{
    PersonlInformation p;
    cout<<"<---------------------------------------------------INFORMATION------------------------------------------->"<<endl;
    PersonlInformation::display(p);
    return 0;
}

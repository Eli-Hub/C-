#include <iostream>

using namespace std;
class Employee
{
private:
    string name;
    int hoursWorked;
    double rate;
    double wage;

public:
    Employee(string, int);
    string getName ();
    int getHoursWorked ();
    double getrate ();
    double calcWage ();
};

Employee::Employee(string n, int hr)
{
    rate=10.0;
    name=n;
    hoursWorked=hr;
}
string Employee::getName ()
{
    return name;
}
int Employee::getHoursWorked ()
{
    return hoursWorked;
}
double Employee::getrate()
{
    return rate;
}
double Employee::calcWage()
{
    wage=hoursWorked*rate;
    return wage;
}
int main()
{
    string nam;
    int hrs;

    cout << endl << "First Employee"<<endl<<endl;
    cout << "Enter Employees Name: ";
    getline (cin, nam);
    cout <<endl;
    cout << "Enter Number of Hours Worked: ";
    cin >> hrs;
    while (hrs<0)
    {
        cout << "Error - Negative Value Not Accepted, Try Again: ";
        cin >> hrs;
    }
    cout << endl;
    Employee first (nam,hrs);
    cout << endl << "Second Employee"<<endl<<endl;
    cin.ignore();
    cout << "Enter Employees Name: ";
    getline (cin, nam);
    cout <<endl;
    cout << "Enter Number of Hours Worked: ";
    cin >> hrs;
    while (hrs<0)
    {
        cout << "Error - Negative Value Not Accepted, Try Again: ";
        cin >> hrs;
    }
    cout << endl;
    Employee second (nam,hrs);
    cout << "FIRST EMPLOYEES DETAILS"<<endl<<endl;
    cout << "Name: "<<first.getName()<<endl;
    cout << "No. of Hours Worked: "<<first.getHoursWorked()<<endl;
    cout << "Wages: GHC "<<first.calcWage()<<endl<<endl;
    cout << "SECOND EMPLOYEES DETAILS"<<endl<<endl;
    cout << "Name: "<<second.getName()<<endl;
    cout << "No. of Hours Worked: "<<second.getHoursWorked()<<endl;
    cout << "Wages: GHC "<<second.calcWage()<<endl<<endl;
    return 0;
}

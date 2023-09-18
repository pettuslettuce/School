#ifndef Employee_h
#define Employee_h
#endif /* Employee_h */
#include <string>
using namespace std;
class Employee
{
    public:
        void print() const;
        void setInfo(string firstName, string lastName, int IDNumber, string Department, string Position);
        void setIDNumber(int IDNumber);
        void setDepartment(string Department);
        void setPosition(string Position);
        void setLastName(string lastName);
        void setFirstName(string firstName);
        string getFirstName() const;
        string getLastName() const;
        int getIDNumber() const;
        string getDepartment() const;
        string getPosition() const;
        Employee();
        Employee(string firstName, string lastName, int IDNumber, string Department, string Position);
    private:
        //class attributes / properties
        string firstName;
        string lastName;
        int IDNumber;
        string Department;
        string Position;
};
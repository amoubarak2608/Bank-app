#include <string>

using namespace std;

class Employee {
private:
    string EmployeeName;
    int EmployeeID;
    string EmployeePosition;
    string EmployeeUsername;
    string EmployeePassword;
    string EmployeeClearanceLevel;
    
public:
    Employee (string a, int b, string c, string d, string e, string f) {
        EmployeeName = a;
        EmployeeID = b;
        EmployeePosition = c;
        EmployeeUsername = d;
        EmployeePassword = e;
        EmployeeClearanceLevel = f;
    }
    
    //getters
    string getEmployeeName() {
        return EmployeeName;
    }
    int getEmployeeID() {
        return EmployeeID;
    }
    string getEmployeePosition() {
        return EmployeePosition;
    }
    string getEmployeeUsername() {
        return EmployeeUsername;
    }
    string getEmployeePassword() {
        return EmployeePassword;
    }
    string getEmployeeClearanceLevel() {
        return EmployeeClearanceLevel;
    }
    
    //setters
    void setEmployeeName(string a) {
        EmployeeName = a;
    }
    void setEmployeePosition(string c) {
        EmployeePosition = c;
    }
    void setEmployeeUsername(string d) {
        EmployeeUsername = d;
    }
    void setEmployeePassword(string e) {
        EmployeePassword = e;
    }
    void setEmployeeClearanceLevel(string f) {
        EmployeeClearanceLevel = f;
    }
};

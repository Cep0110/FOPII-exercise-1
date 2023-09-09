#include <iostream>
#include <string>

class Employee {
private:
    std::string name;
    int ID;
    double hourlyWage;

public:
    // Setter function to set employee's information
    void setEmployeeInfo(const std::string& employeeName, int employeeID, double employeeHourlyWage) {
        name = employeeName;
        ID = employeeID;
        hourlyWage = employeeHourlyWage;
    }

    // Function to calculate the weekly salary based on the number of hours worked
    double calculateWeeklySalary(double hoursWorked) const {
        return hoursWorked * hourlyWage;
    }

    // Function to display the employee's information
    void displayEmployeeInfo() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "ID: " << ID << std::endl;
        std::cout << "Hourly Wage: $" << hourlyWage << std::endl;
    }
};

int main() {
    // Create an employee object and set their information
    Employee myEmployee;
    myEmployee.setEmployeeInfo("John Doe", 123456, 15.0);

    // Display the employee's information
    myEmployee.displayEmployeeInfo();

    // Calculate and display the weekly salary based on the number of hours worked
    double hoursWorked = 40.0;
    double weeklySalary = myEmployee.calculateWeeklySalary(hoursWorked);
    std::cout << "Weekly Salary: $" << weeklySalary << std::endl;

    return 0;
}

/*

-> Problem Statement: Employee Management System

You are tasked with implementing an Employee Management System using C++ that supports CRUD operations. Each employee has the following properties:

- `id`: A unique identifier for each employee (integer).
- `name`: The name of the employee (string).
- `department`: The department the employee works in (string).
- `salary`: The salary of the employee (float).

The system should allow the user to perform the following operations:

1. Create (Add a New Employee):
   - Add a new employee to the system by specifying their `id`, `name`, `department`, and `salary`.
   
2. Read (Display Employee Information):
   - Retrieve and display all employee information.
   - Alternatively, search for an employee by their `id` and display their details.

3. Update (Modify Employee Information):
   - Modify an existing employee's details by specifying their `id`. Update their `name`, `department`, or `salary`.

4. Delete (Remove an Employee):
   - Remove an employee from the system by their `id`.

5. Aggregation:
   - Calculate and display the total salary expenditure for all employees in the system.
   - Calculate and display the average salary of all employees.

-> Requirements:

- Implement the system using a class called `Employee` and a container (e.g., `std::vector`, `std::list`) to store employee records.
- Use appropriate methods for each of the CRUD operations.
- Ensure that `id` is unique, and there should be no duplicates in the system.
- Provide basic error handling, such as checking for the existence of an employee before updating or deleting.

-> Sample Input/Output:

Employee Management System

1. Add Employee
2. View All Employees
3. Search Employee by ID
4. Update Employee Information
5. Delete Employee
6. Calculate Total Salary Expenditure
7. Calculate Average Salary
8. Exit

Enter your choice: 1
Enter employee ID: 101
Enter employee name: John Doe
Enter department: HR
Enter salary: 55000

Employee added successfully.

Enter your choice: 2
All Employees:
ID: 101, Name: John Doe, Department: HR, Salary: 55000

Enter your choice: 6
Total Salary Expenditure: 55000


-> Constraints:

- The system should support at least 100 employees.
- The employee `id` should be a positive integer.
- The `salary` should be a non-negative float.
- Handle edge cases like trying to update or delete a non-existent employee.
*/

#include<iostream>
using namespace std;

#define MAX_EMPLOYEES 100

class Employee {
public:
    int id;
    string name;
    string department;
    float salary;

    Employee() {}

    Employee(int id, string name, string department, float salary) {
        this->id = id;
        this->name = name;
        this->department = department;
        this->salary = salary;
    }
};

class EmployeeManagementSystem {
private:
    Employee employees[MAX_EMPLOYEES];  // Aggregation happens here
    int total_employees;

public:
    EmployeeManagementSystem() {
        total_employees = 0;
    }

    void addNewEmployee(const Employee& e) {
        if (total_employees <= MAX_EMPLOYEES) {
            employees[total_employees] = e;
            total_employees++;
        } else {
            cout << "Max employees length reached." << endl;
        }
    }

    void displayAllEmployees() {
        cout << "---------------------------------------------------------" << endl;
        cout << "All Employee Details: " << endl;
        cout << "---------------------------------------------------------" << endl;

        if (total_employees > 0) {
            for (int i = 0; i < total_employees; i++) {
                cout << "ID: " << employees[i].id << endl;
                cout << "Name: " << employees[i].name << endl;
                cout << "Department: " << employees[i].department << endl;
                cout << "Salary: " << employees[i].salary << endl;
                cout << "---------------------------------------------------------" << endl;
            }
        } else {
            cout << "No Employee Data Found!" << endl;
        }
    }

    void displayEmployeeByID(int id) {
        bool found = false;

        for (int i = 0; i < total_employees; i++) {
            if (employees[i].id == id) {
                found = true;
                cout << "ID: " << employees[i].id << endl;
                cout << "Name: " << employees[i].name << endl;
                cout << "Department: " << employees[i].department << endl;
                cout << "Salary: " << employees[i].salary << endl;
                cout << "---------------------------------------------------------" << endl;
                break;
            }
        }

        if(!found) {
            cout << "No Employee found with id: " << id << endl;
        }
    }

    void updateEmployeeDetails(int id, string new_name, string new_department, float new_salary) {
        bool found = false;

        for (int i = 0; i < total_employees; i++) {
            if (employees[i].id == id) {
                found = true;
                employees[i].name = new_name;
                employees[i].department = new_department;
                employees[i].salary = new_salary;
                break;
            }
        }

        if(!found) {
            cout << "No Employee found with id: " << id << endl;
        }
    }

    void deleteEmployeeByID(int id) {
        int i;
        bool found = false;

        for (i = 0; i < total_employees; i++) {
            if (employees[i].id == id) {
                found = true;
                break;
            }
        }

        if (found) {
            for (int j = i; j < total_employees-1; j++) {
                employees[j] = employees[j+1];
            }
            total_employees--;
        } else {
            cout << "No Employee found with id: " << id << endl;
        }
    }
};

int main() {
    EmployeeManagementSystem emp_sys;

    emp_sys.addNewEmployee(Employee(101, "Alice", "Developer", 4000));
    emp_sys.addNewEmployee(Employee(102, "Bob", "Software Engineer", 6000));
    emp_sys.addNewEmployee(Employee(103, "Charlie", "Manager", 8000));
    emp_sys.addNewEmployee(Employee(104, "David", "Team Lead", 10000));
    emp_sys.displayAllEmployees();

    emp_sys.updateEmployeeDetails(102, "Krish yadav", "Collector", 5000);
    
    emp_sys.displayAllEmployees();
    
    // emp_sys.displayEmployeeByID(1003);
    // emp_sys.deleteEmployeeByID(103);

    return 0;
}
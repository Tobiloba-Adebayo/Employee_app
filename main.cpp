#include <iostream>
#include <string>

using namespace std;

// Define constants for array sizes
const int MAX_EMPLOYEES = 100;
const int SALARY_BASE = 2000;
const int BONUS_RATE = 500;

// Define Employee structure
struct Employee {
    string name;
    int id;
    int salary;
};

// Function prototypes
void addEmployee(Employee employees[], int &numEmployees);
void viewEmployees(const Employee employees[], int numEmployees);
void calculateTotalPay(Employee employees[], int numEmployees);
void deleteEmployee(Employee employees[], int &numEmployees);
void editEmployee(Employee employees[], int numEmployees);

int main() {
    Employee employees[MAX_EMPLOYEES];
    int numEmployees = 0;
    char choice;

    do {
        cout << "Employee Management System" << endl;
        cout << "1. Add Employee" << endl;
        cout << "2. View Employees" << endl;
        cout << "3. Calculate Total Pay" << endl;
        cout << "4. Delete Employee" << endl;
        cout << "5. Edit Employee" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case '1':
                addEmployee(employees, numEmployees);
                break;
            case '2':
                viewEmployees(employees, numEmployees);
                break;
            case '3':
                calculateTotalPay(employees, numEmployees);
                break;
            case '4':
                deleteEmployee(employees, numEmployees);
                break;
            case '5':
                editEmployee(employees, numEmployees);
                break;
            case '6':
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != '6');

    return 0;
}

// Function to add a new employee
void addEmployee(Employee employees[], int &numEmployees) {
    if (numEmployees < MAX_EMPLOYEES) {
        cout << "Enter employee name: ";
        cin >> employees[numEmployees].name;
        cout << "Enter employee ID: ";
        cin >> employees[numEmployees].id;
        employees[numEmployees].salary = SALARY_BASE;
        numEmployees++;
        cout << "Employee added successfully." << endl;
    } else {
        cout << "Maximum number of employees reached." << endl;
    }
}

// Function to view all employees' details
void viewEmployees(const Employee employees[], int numEmployees) {
    if (numEmployees == 0) {
        cout << "No employees to display." << endl;
    } else {
        cout << "Employee details:" << endl;
        for (int i = 0; i < numEmployees; ++i) {
            cout << "Name: " << employees[i].name << ", ID: " << employees[i].id << ", Salary: " << employees[i].salary << endl;
        }
    }
}

// Function to calculate total pay (salary + bonus) for each employee
void calculateTotalPay(Employee employees[], int numEmployees) {
    if (numEmployees == 0) {
        cout << "No employees to calculate total pay for." << endl;
    } else {
        cout << "Total pay for each employee:" << endl;
        for (int i = 0; i < numEmployees; ++i) {
            int totalPay = employees[i].salary + BONUS_RATE;
            cout << "Name: " << employees[i].name << ", Total Pay: " << totalPay << endl;
        }
    }
}

// Function to delete an employee
void deleteEmployee(Employee employees[], int &numEmployees) {
    if (numEmployees == 0) {
        cout << "No employees to delete." << endl;
        return;
    }

    int employeeId;
    cout << "Enter employee ID to delete: ";
    cin >> employeeId;

    int indexToDelete = -1;
    for (int i = 0; i < numEmployees; ++i) {
        if (employees[i].id == employeeId) {
            indexToDelete = i;
            break;
        }
    }

    if (indexToDelete != -1) {
        // Shift elements to the left to overwrite the deleted employee
        for (int i = indexToDelete; i < numEmployees - 1; ++i) {
            employees[i] = employees[i + 1];
        }
        numEmployees--;
        cout << "Employee deleted successfully." << endl;
    } else {
        cout << "Employee with ID " << employeeId << " not found." << endl;
    }
}

// Function to edit employee data
void editEmployee(Employee employees[], int numEmployees) {
    if (numEmployees == 0) {
        cout << "No employees to edit." << endl;
        return;
    }

    int employeeId;
    cout << "Enter employee ID to edit: ";
    cin >> employeeId;

    for (int i = 0; i < numEmployees; ++i) {
        if (employees[i].id == employeeId) {
            cout << "Enter new name for employee " << employees[i].id << ": ";
            cin >> employees[i].name;
            cout << "Enter new salary for employee " << employees[i].id << ": ";
            cin >> employees[i].salary;
            cout << "Employee data updated successfully." << endl;
            return;
        }
    }

    cout << "Employee with ID " << employeeId << " not found." << endl;
}


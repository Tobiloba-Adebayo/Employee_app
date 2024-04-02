# Employee_app
It is an application created with c++ that helps to store employees' data and also calculate their pay.
Of course, let's explain the code without demonstrating it:

1. **Constants**: 
   - `MAX_EMPLOYEES`: Defines the maximum number of employees the system can handle.
   - `SALARY_BASE`: Defines the base salary for all employees.
   - `BONUS_RATE`: Defines the bonus rate.

2. **Employee struct**:
   - `Employee`: A structure containing three fields: `name` (string), `id` (integer), and `salary` (integer).

3. **Function prototypes**:
   - `addEmployee`: Adds a new employee to the system.
   - `viewEmployees`: Displays details of all employees in the system.
   - `calculateTotalPay`: Calculates the total pay (salary + bonus) for each employee.

4. **Main function**:
   - Declares variables, including an array of `Employee` structures and a counter for the number of employees.
   - Displays a menu of options for the user.
   - Reads the user's choice and executes corresponding actions using a switch statement.
   - The loop continues until the user chooses to exit.

5. **Function definitions**:
   - `addEmployee`: Prompts the user to input employee details, assigns a base salary, and increments the number of employees.
   - `viewEmployees`: Displays details of all employees stored in the array.
   - `calculateTotalPay`: Calculates the total pay (salary + bonus) for each employee and displays it.

These functions operate on the array of `Employee` structures to manage employee data and perform necessary operations. The program's functionality revolves around the user interface provided by the menu in the main function.

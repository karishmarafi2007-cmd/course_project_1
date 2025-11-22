# <h1 align="center">EMPLOYEE MANAGEMENT</h1>

___

******ABSTRACT******

 The Employee Management System is a console-based application developed in the C programming language to efficiently manage employee records within an organization. The system provides essential operations such as adding, viewing, searching, updating, and deleting employee details. Each employee record   includes personal and professional information such as ID, Name, Age, Gender, Department, Salary, Phone Number, Email, and Address. The project uses file handling to permanently store employee data in a binary file (employees.dat), allowing information to remain saved even after the program is closed. The   system loads  all records at startup and updates the file after every change, ensuring data consistency. A menu-driven interface makes the system user-  friendly and easy  to navigate, even for non-technical users.This project demonstrates effective use of structures, arrays, file operations, and modular   programming in C. It  provides a simple yet practical solution for small businesses or educational purposes to maintain employee information systematically. 

 ____
 
******FEATURES******


**1. Add New Employee**

Stores full employee details: ID, Name, Age, Gender, Department, Salary, Phone, Email, AddressAutomatically saves new records to a binary file (employees.dat)

**2. View All Employees**

a)Displays all employees in a formatted table

b)Useful for quick viewing of all stored data

**3. Search Employee by ID**

Quickly finds and displays all details of a specific employee

**5. Delete Employee Record**

a)Removes an employee by their ID

b)Shifts all entries to maintain correct order

**6. Permanent Data Storage using File Handling**

Uses binary files to store and retrieve data even after the program closes

**7. User-Friendly Menu-Driven Interface**

Easy navigation using a number-based menu




******TECHINAL REQUIREMENTS FOR THE CODE******

___

**a)Hardware Requirements**

Minimum 2 GB RAM

Any processor capable of running C compiler

50 MB free disk space (for storing project files and output file employees.dat)


**b)Software Requirements**

Operating System:

Windows / Linux / macOS


**c)C Compiler:**

GCC (MinGW for Windows)

Turbo C/C++ (not recommended for modern systems)

Clang / Visual Studio Compiler


**d)IDE or Text Editor:**

Code::Blocks

Dev-C++

VS Code with C/C++ extension

Sublime Text / Notepad++

Linux terminal with GCC

**e)Library Requirements**

Uses only standard C libraries:

#include <stdio.h>
#include <stdlib.h>
#include <string.h>





******FUNCTIONAL REQUIREMENTS OF THE CODE******

___

**1. Add Employee**

Enter all employee details (ID, Name, Age, Gender, Department, Salary, Phone, Email, Address)

Store the data in the array and save it to file


**2. View Employees**

Display all employees in a formatted table

Shows complete list of available records


**3. Search Employee**

Allows searching based on Employee ID

Shows detailed information if ID is found


**4. Update Employee**

Search employee by ID and modify details

Save updated information to file


**5. Delete Employee**

Remove employee record by ID

Shift remaining data and update file


**6. File Handling**

Store all employee data in employees.dat

Load existing data automatically when the program starts

Save data after add/update/delete operations


**7. Menu-Driven System**

Continuously shows options:

1. Add Employee
2. View Employees
3. Search Employee
4. Update Employee
5. Delete Employee
6. Exit


******HOW TO RUN A CODE******

___

**Option 1: Run Using GCC (Recommended)**

Step 1: Save the Code

Save the program as:

employee_management.c

Step 2: Open Terminal / Command Prompt

Step 3: Compile the code

gcc employee_management.c -o employee_management

Step 4: Run the program

./employee_management

(Windows users type: employee_management.exe)



**Option 2: Run Using Code::Blocks**

1. Open Code::Blocks


2. Click Create New Project → Console Application (C)


3. Replace the default code with your code


4. Press Build & Run (F9)




**Option 3: Run Using Dev-C++**

1. Open Dev-C++


2. File → New → Source File


3. Paste the code


4. Save with .c extension


5. Press Compile & Run



**Option 4: Run in VS Code**

1. Install VS Code


2. Install C/C++ Extension


3. Install MinGW GCC


4. Create folder → Add .c file


5. Open terminal → Run:



gcc employee_management.c -o employee_management
./employee_management
## SCREENSHORTS ##
**1) MAIN MENU.**

<p align="center">
  <img src="https://github.com/karishmarafi2007-cmd/course_project_1/blob/44eb12afbf6f97cce2f9f8768259fc0998a04b7f/SC1.jpg" width="500"<p align="center">
  <img src="screenshots/search_patient.png" width="400">
</p>

**2)ADDING ON EMPLOYEE.**
<p align="center">
  <img src="https://github.com/karishmarafi2007-cmd/course_project_1/blob/44eb12afbf6f97cce2f9f8768259fc0998a04b7f/SC2.jpg" width="400">
</p>

**3)VIEWING ALL EMPLOYEES**

<p align="center">
  <img src="https://github.com/karishmarafi2007-cmd/course_project_1/blob/44eb12afbf6f97cce2f9f8768259fc0998a04b7f/SC3.jpg" width="400">
</p>

**4)SEARCHING FOR AN EMPLOYEE**

<p align="center">
  <img src="https://github.com/karishmarafi2007-cmd/course_project_1/blob/44eb12afbf6f97cce2f9f8768259fc0998a04b7f/SC4.jpg" width="400">
</p>

**5)UPDATING EMPLOYEE DETAILS**

<p align="center">
  <img src="https://github.com/karishmarafi2007-cmd/course_project_1/blob/44eb12afbf6f97cce2f9f8768259fc0998a04b7f/SC5.jpg" width="400">
</p>

**6)DELEATING AN EMPLOYEE**

<p align="center">
  <img src="https://github.com/karishmarafi2007-cmd/course_project_1/blob/44eb12afbf6f97cce2f9f8768259fc0998a04b7f/SC6.jpg" width="400">
</p>

# <h2 align="center"> THE END </h2>

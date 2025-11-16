    #include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_EMPLOYEES 100

typedef struct {
    int id;
    char name[50];
    int age;
    char gender[10];
    char department[50];
    float salary;
    char phone[15];
    char email[50];
    char address[100];
} Employee;

Employee employees[MAX_EMPLOYEES];
int employeeCount = 0;

// Function to save employees to the file
void saveToFile() {
    FILE *file = fopen("employees.dat", "wb");
    if (file != NULL) {
        fwrite(&employeeCount, sizeof(int), 1, file);
        fwrite(employees, sizeof(Employee), employeeCount, file);
        fclose(file);
    }
}

// Function to load employees from file
void loadFromFile() {
    FILE *file = fopen("employees.dat", "rb");
    if (file != NULL) {
        fread(&employeeCount, sizeof(int), 1, file);
        fread(employees, sizeof(Employee), employeeCount, file);
        fclose(file);
    }
}

// Function to add an employee
void addEmployee() {
    if (employeeCount >= MAX_EMPLOYEES) {
        printf("Employee list is full!\n");
        return;
    }

    Employee emp;
    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter Name: ");
    scanf(" %[^\n]", emp.name);
    printf("Enter Age: ");
    scanf("%d", &emp.age);
    printf("Enter Gender: ");
    scanf(" %[^\n]", emp.gender);
    printf("Enter Department: ");
    scanf(" %[^\n]", emp.department);
    printf("Enter Salary: ");
    scanf("%f", &emp.salary);
    printf("Enter Phone Number: ");
    scanf(" %[^\n]", emp.phone);
    printf("Enter Email: ");
    scanf(" %[^\n]", emp.email);
    printf("Enter Address: ");
    scanf(" %[^\n]", emp.address);

    employees[employeeCount++] = emp;
    saveToFile();
    printf("Employee added successfully!\n");
}

// Functions to view all the employees
void viewEmployees() {
    if (employeeCount == 0) {
        printf("No employees to display.\n");
        return;
    }

    printf("\n%-5s %-15s %-5s %-10s %-15s %-10s %-15s %-25s %-20s\n",
           "ID", "Name", "Age", "Gender", "Department", "Salary", "Phone", "Email", "Address");
    printf("_________________________________________________________________________________________________________________\n");

    for (int i = 0; i < employeeCount; i++) {
        printf("%-5d %-15s %-5d %-10s %-15s %-10.2f %-15s %-25s %-20s\n",
               employees[i].id, employees[i].name, employees[i].age, employees[i].gender,
               employees[i].department, employees[i].salary,
               employees[i].phone, employees[i].email, employees[i].address);
    }
}

// Functions to search employee by their ID
void searchEmployee() {
    int id;
    printf("Enter Employee ID to search: ");
    scanf("%d", &id);
    for (int i = 0; i < employeeCount; i++) {
        if (employees[i].id == id) {
            printf("\nEmployee Details:\n");
            printf("ID: %d\n", employees[i].id);
            printf("Name: %s\n", employees[i].name);
            printf("Age: %d\n", employees[i].age);
            printf("Gender: %s\n", employees[i].gender);
            printf("Department: %s\n", employees[i].department);
            printf("Salary: %.2f\n", employees[i].salary);
            printf("Phone: %s\n", employees[i].phone);
            printf("Email: %s\n", employees[i].email);
            printf("Address: %s\n", employees[i].address);
            return;
        }
    }
    printf("Employee not found.\n");
}

// Functions to update employee
void updateEmployee() {
    int id;
    printf("Enter Employee ID to update: ");
    scanf("%d", &id);
    for (int i = 0; i < employeeCount; i++) {
        if (employees[i].id == id) {
            printf("Enter new Name: ");
            scanf(" %[^\n]", employees[i].name);
            printf("Enter new Age: ");
            scanf("%d", &employees[i].age);
            printf("Enter new Gender: ");
            scanf(" %[^\n]", employees[i].gender);
            printf("Enter new Department: ");
            scanf(" %[^\n]", employees[i].department);
            printf("Enter new Salary: ");
            scanf("%f", &employees[i].salary);
            printf("Enter new Phone: ");
            scanf(" %[^\n]", employees[i].phone);
            printf("Enter new Email: ");
            scanf(" %[^\n]", employees[i].email);
            printf("Enter new Address: ");
            scanf(" %[^\n]", employees[i].address);
            saveToFile();
            printf("Employee updated successfully!\n");
            return;
        }
    }
    printf("Employee not found.\n");
}

// Functions to delete employee
void deleteEmployee() {
    int id;
    printf("Enter Employee ID to delete: ");
    scanf("%d", &id);
    for (int i = 0; i < employeeCount; i++) {
        if (employees[i].id == id) {
            for (int j = i; j < employeeCount - 1; j++) {
                employees[j] = employees[j + 1];
            }
            employeeCount--;
            saveToFile();
            printf("Employee deleted successfully!\n");
            return;
        }
    }
    printf("Employee not found.\n");
}

int main() {
    loadFromFile();
    int choice;
    while (1) {
        printf("\n==== Employee Management System ====\n");
        printf("1. Add Employee\n");
        printf("2. View Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Employee\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: addEmployee(); break;
            case 2: viewEmployees(); break;
            case 3: searchEmployee(); break;
            case 4: updateEmployee(); break;
            case 5: deleteEmployee(); break;
            case 6: exit(0);
            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}

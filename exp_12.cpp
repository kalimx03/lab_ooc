#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int id;
    string name;
    float basicSalary;

public:
    Employee(int i, string n, float salary) {
        id = i;
        name = n;
        basicSalary = salary;
    }

    void displayDetails() {
        cout << "\nEmployee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Basic Salary: Rs. " << basicSalary << endl;
    }

    float getSalary() {
        return basicSalary;
    }

    string getName() {
        return name;
    }

    ~Employee() {
        cout << "\nEmployee object destroyed." << endl;
    }
};

class Salary : public Employee {
private:
    float hra;
    float da;

public:
    Salary(int i, string n, float salary, float h, float d)
        : Employee(i, n, salary) {
        hra = h;
        da = d;
    }

    float calculateSalary() {
        return getSalary() + hra + da;
    }

    float calculateSalary(float bonus) {
        return getSalary() + hra + da + bonus;
    }

    void displaySalary() {
        displayDetails();

        cout << "HRA: Rs. " << hra << endl;
        cout << "DA: Rs. " << da << endl;
        cout << "Gross Salary: Rs. " << calculateSalary() << endl;
    }

    void displaySalary(float bonus) {
        displaySalary();
        cout << "Bonus: Rs. " << bonus << endl;
        cout << "Salary with Bonus: Rs. "
             << calculateSalary(bonus) << endl;
    }
};

int main() {
    int id;
    string name;
    float basic, hra, da, bonus;

    cout << "Enter Employee ID: ";
    cin >> id;

    cin.ignore();

    cout << "Enter Employee Name: ";
    getline(cin, name);

    cout << "Enter Basic Salary: ";
    cin >> basic;

    cout << "Enter HRA: ";
    cin >> hra;

    cout << "Enter DA: ";
    cin >> da;

    cout << "Enter Bonus: ";
    cin >> bonus;

    Salary emp(id, name, basic, hra, da);

    cout << "\n----- Employee Salary Details -----";
    emp.displaySalary();

    cout << "\n----- Salary With Bonus -----";
    emp.displaySalary(bonus);

    return 0;
}
#include  <iostream>
using namespace std;

class student 
{
    int rollNo;
    char name[50];
    public:
    void getStudentinfo()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin >> name;
    
    }
    void displayStudentinfo()
    {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};
class Exam : public student
{
    public:
    int physicsmarks,chemistrymarks,mathsmarks;
    void getMarks()
    {
        cout << "Enter Physics Marks: ";
        cin >> physicsmarks;
        cout << "Enter Chemistry Marks: ";
        cin >> chemistrymarks;
        cout << "Enter Maths Marks: ";
        cin >> mathsmarks;
    }
    void displayMarks()
    {
        cout << "Physics Marks: " << physicsmarks << endl;
        cout << "Chemistry Marks: " << chemistrymarks << endl;
        cout << "Maths Marks: " << mathsmarks << endl;
    }
};
class result : public Exam 
{
    public :
    int toatal;
    void showResult()
    {
        total=physicsmarks + chemistrymarks + mathsmarks;
        cout<<"\n Your Total Marks: "<<total<<endl;
    }
};
void main()
{
    result r;
    r.getStudentinfo();
    r.getMarks();
    r.displayStudentinfo();
    r.displayMarks();
    r.showResult();
}

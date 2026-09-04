#include <iostream>
#include <vector>
#include <string>
using namespace std;



class Person
{
private:
    string name;
    int age;
    string phone;

public:

    
    Person(string n = "", int a = 0, string p = "")
    {
        name = n;
        age = a;
        phone = p;
    }

    
    string getName()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }

    string getPhone()
    {
        return phone;
    }


    void setName(string n)
    {
        name = n;
    }

    void setAge(int a)
    {
        age = a;
    }

    void setPhone(string p)
    {
        phone = p;
    }


    virtual void displayDetails()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Phone: " << phone << endl;
    }
};



class Student : public Person
{
private:
    int rollNo;
    string branch;
    string qualification;

public:

    
    Student(string n = "", int a = 0, string p = "",
            int r = 0, string b = "", string q = "")
        : Person(n, a, p)
    {
        rollNo = r;
        branch = b;
        qualification = q;
    }

    
    int getRollNo()
    {
        return rollNo;
    }

    string getBranch()
    {
        return branch;
    }

    string getQualification()
    {
        return qualification;
    }

    
    void setRollNo(int r)
    {
        rollNo = r;
    }

    void setBranch(string b)
    {
        branch = b;
    }

    void setQualification(string q)
    {
        qualification = q;
    }


    void displayDetails() override
    {
        cout << "\n--- Student Details ---" << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << getName() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Phone: " << getPhone() << endl;
        cout << "Branch: " << branch << endl;
        cout << "Qualification: " << qualification << endl;
    }
};



class Course
{
private:
    int courseId;
    string courseName;
    string duration;
    float fees;

public:

    
    Course(int id = 0, string name = "",
           string d = "", float f = 0)
    {
        courseId = id;
        courseName = name;
        duration = d;
        fees = f;
    }

    
    int getCourseId()
    {
        return courseId;
    }

    string getCourseName()
    {
        return courseName;
    }

    string getDuration()
    {
        return duration;
    }

    float getFees()
    {
        return fees;
    }

    
    void displayCourse()
    {
        cout << "\nCourse ID: " << courseId << endl;
        cout << "Course Name: " << courseName << endl;
        cout << "Duration: " << duration << endl;
        cout << "Fees: Rs. " << fees << endl;
    }
};



class Admission
{
private:
    int admissionId;
    int studentRollNo;
    int courseId;
    string admissionDate;

public:

    
    Admission(int aid = 0, int roll = 0,
              int cid = 0, string date = "")
    {
        admissionId = aid;
        studentRollNo = roll;
        courseId = cid;
        admissionDate = date;
    }

    int getAdmissionId()
    {
        return admissionId;
    }

    int getStudentRollNo()
    {
        return studentRollNo;
    }

    int getCourseId()
    {
        return courseId;
    }
    void displayAdmission()
    {
        cout << "\nAdmission ID: " << admissionId << endl;
        cout << "Student Roll No: " << studentRollNo << endl;
        cout << "Course ID: " << courseId << endl;
        cout << "Admission Date: " << admissionDate << endl;
    }
};

class Academy
{
private:
    string academyName;

    vector<Student> students;
    vector<Course> courses;
    vector<Admission> admissions;

public:
    Academy(string name = "DYP Academy")
    {
        academyName = name;
    }
    void addStudent()
    {
        string name, phone, branch, qualification;
        int age, rollNo;

        cout << "\nEnter Roll No: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Age: ";
        cin >> age;

        cout << "Enter Phone: ";
        cin >> phone;

        cout << "Enter Branch: ";
        cin >> branch;

        cout << "Enter Qualification: ";
        cin >> qualification;

        students.push_back(
            Student(name, age, phone,
                    rollNo, branch, qualification)
        );

        cout << "\nStudent added successfully!" << endl;
    }
    void displayStudents()
    {
        if (students.empty())
        {
            cout << "\nNo students found." << endl;
            return;
        }

        cout << "\n===== STUDENT LIST =====" << endl;

        for (Student &s : students)
        {
            s.displayDetails();
        }
    }
    void searchStudent()
    {
        int roll;

        cout << "\nEnter Roll No to search: ";
        cin >> roll;

        for (Student &s : students)
        {
            if (s.getRollNo() == roll)
            {
                cout << "\nStudent Found!" << endl;
                s.displayDetails();
                return;
            }
        }

        cout << "\nStudent not found." << endl;
    }
    void addCourse()
    {
        int id;
        string name, duration;
        float fees;

        cout << "\nEnter Course ID: ";
        cin >> id;

        cout << "Enter Course Name: ";
        cin >> name;

        cout << "Enter Duration: ";
        cin >> duration;

        cout << "Enter Fees: ";
        cin >> fees;

        courses.push_back(
            Course(id, name, duration, fees)
        );

        cout << "\nCourse added successfully!" << endl;
    }
    void displayCourses()
    {
        if (courses.empty())
        {
            cout << "\nNo courses available." << endl;
            return;
        }

        cout << "\n===== COURSE LIST =====" << endl;

        for (Course &c : courses)
        {
            c.displayCourse();
        }
    }
    void takeAdmission()
    {
        int admissionId, rollNo, courseId;
        string date;

        cout << "\nEnter Admission ID: ";
        cin >> admissionId;

        cout << "Enter Student Roll No: ";
        cin >> rollNo;
        bool studentFound = false;

        for (Student &s : students)
        {
            if (s.getRollNo() == rollNo)
            {
                studentFound = true;
                break;
            }
        }

        if (!studentFound)
        {
            cout << "\nStudent does not exist!" << endl;
            return;
        }

        cout << "Enter Course ID: ";
        cin >> courseId;
        bool courseFound = false;

        for (Course &c : courses)
        {
            if (c.getCourseId() == courseId)
            {
                courseFound = true;
                break;
            }
        }

        if (!courseFound)
        {
            cout << "\nCourse does not exist!" << endl;
            return;
        }

        cout << "Enter Admission Date: ";
        cin >> date;

        admissions.push_back(
            Admission(admissionId, rollNo,
                      courseId, date)
        );

        cout << "\nAdmission completed successfully!" << endl;
    }
    void displayAdmissions()
    {
        if (admissions.empty())
        {
            cout << "\nNo admissions found." << endl;
            return;
        }

        cout << "\n===== ADMISSION LIST =====" << endl;

        for (Admission &a : admissions)
        {
            a.displayAdmission();
        }
    }
    void menu()
    {
        int choice;

        do
        {
            cout << "\n\n================================";
            cout << "\n   ACADEMY ADMISSION SYSTEM";
            cout << "\n================================";

            cout << "\n1. Add Student";
            cout << "\n2. Display Students";
            cout << "\n3. Search Student";
            cout << "\n4. Add Course";
            cout << "\n5. Display Courses";
            cout << "\n6. Take Admission";
            cout << "\n7. Display Admissions";
            cout << "\n8. Exit";

            cout << "\n\nEnter your choice: ";
            cin >> choice;

            switch (choice)
            {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                addCourse();
                break;

            case 5:
                displayCourses();
                break;

            case 6:
                takeAdmission();
                break;

            case 7:
                displayAdmissions();
                break;

            case 8:
                cout << "\nThank you!" << endl;
                break;

            default:
                cout << "\nInvalid choice!" << endl;
            }

        } while (choice != 8);
    }
};
int main()
{
    Academy academy("DYP Academy");

    academy.menu();

    return 0;
}
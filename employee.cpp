#include<iostream>
#include<string>
using namespace std;
class employee{
    private:
    int id;
    string designation;
    string branch;
    int salary;
   
    public:
    
   void inputdetails(){
         cout<<"Enter your id:";
         cin>>id;
         cout<<"Enter your Designation:";
         cin>>designation;
         cout<<"Enter YOUR Branch:";
         cin>>branch;
         cout<<"Enter your Basic Salary:";
         cin>>salary;
   }
         void grosssalary(){
            float grosssalary;
            grosssalary=salary+(salary*0.1)+(salary*0.2);
            cout<<"Gross salary"<<grosssalary<<endl;

         }

    void displaydetails(){
        cout<<"---Employee Profile is---";
        cout<<"Your id is :"<<id<<endl;         
        cout<<"Your Designation is:"<<designation<<endl;
        cout<<"Your Branch is:"<<endl;
        cout<<"Basic Salary is:"<<salary<<endl;
        
    }
};
int main()
{
     employee e[3];
     e[0].inputdetails();
     e[0].displaydetails();
     e[0].grosssalary();
     e[1].inputdetails();
     e[1].displaydetails();
     e[1].grosssalary();
     e[2].inputdetails();
     e[2].displaydetails();
     e[2].grosssalary();
     e[3].inputdetails();
     e[3].displaydetails();
     e[3].grosssalary();
     return 0;
}
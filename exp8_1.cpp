#include <iostream> 
using namespace std; 
class Distance { 
    public: 
        int feet,inch;

        // Constructor to initialize the object's value 
        Distance(int f,int i) { 
            this->feet=f; 
            this->inch=i; 
        } 


    void operator++() { 
        feet++; 
        inch++;  
        cout<<"\nFeet & Inches(Decrement): "<<feet<<"'"<<inch<<endl; 
    } 


    // Overloading(-) operator to perform decrement operation of Distance object 
    void operator+() { 
        feet++; 
        inch++;  
        cout<<"\nFeet & Inches(Decrement): "<<feet<<"'"<<inch<<endl; 
    } 
}; 

// Driver Code 
int main() { 
    Distance d1(8,9);      // Use (-) unary operator by single operand 
    cout<<d1.feet<<"'"<<d1.inch<<endl;
    ++d1;
    cout<<d1.feet<<"'"<<d1.inch<<endl;
    return 0; 
} 
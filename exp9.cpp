#include <iostream> // Include necessary header for input/output stream 
#include <cmath> // Include necessary header for mathematical functions 
using namespace std;
const double PI = 3.14159; // Define constant value for PI 
class Shape { // Define a base class named Shape 
    public: 
        virtual double calculateArea() const = 0;           // Virtual member function to calculate the area (pure virtual function) 
        virtual double calculatePerimeter() const = 0;      // Virtual member function to calculate the perimeter (pure virtual function) 
}; 
class Circle: public Shape {                                // Define a derived class named Circle inheriting from Shape 
    private:  
        double radius;                                      // Private member variable to store the radius of the circle 
    public: 
        Circle(double rad): radius(rad) {}                  // Constructor for Circle class 
        double calculateArea() const override {             // Override the virtual member function to calculate the area 
            return PI * pow(radius, 2);                     // Calculate the area of the circle using the radius 
        } 
        double calculatePerimeter() const override {        // Override the virtual member function to calculate the perimeter 
            return 2 * PI * radius;                         // Calculate the perimeter of the circle using the radius 
        } 
}; 
class Rectangle: public Shape {       // Define a derived class named Rectangle inheriting from Shape 
    private:  
        double length;                // Private member variable to store the length of the rectangle 
        double width;                 // Private member variable to store the width of the rectangle 
    public: 
        Rectangle(double len, double wid): length(len), width(wid) {}       // Constructor for Rectangle class 
        double calculateArea() const override {                             // Override the virtual member function to calculate the area 
            return length * width;                                          // Calculate the area of the rectangle using its length and width 
        } 
        double calculatePerimeter() const override {                        // Override the virtual member function to calculate the perimeter 
            return 2 * (length + width);                                    // Calculate the perimeter of the rectangle using its length and width 
        } 
}; 
class Triangle: public Shape {                                              // Define a derived class named Triangle inheriting from Shape 
    private:  
        double side1;                      // Private member variable to store the first side of the triangle 
        double side2;                      // Private member variable to store the second side of the triangle 
        double side3;                      // Private member variable to store the third side of the triangle 
    public: 
        Triangle(double s1, double s2, double s3): side1(s1), side2(s2), side3(s3) {}                 // Constructor for Triangle class 
        double calculateArea() const override {                                                       // Override the virtual member function to calculate the area 
            double s = (side1 + side2 + side3) / 2;                                                   // Calculate the semi-perimeter of the triangle 
            return sqrt(s * (s - side1) * (s - side2) * (s - side3));                                 // Calculate the area using Heron's formula 
        } 
        double calculatePerimeter() const override {                             // Override the virtual member function to calculate the perimeter 
            return side1 + side2 + side3; // Calculate the perimeter of the triangle using its sides 
        } 
}; 
int main() { 
    Circle circle(7.0);                                 // Create a Circle object with radius 7.0 
    Rectangle rectangle(4.2, 8.0);                      // Create a Rectangle object with length 4.2 and width 8.0 
    Triangle triangle(4.0, 4.0, 3.2);                   // Create a Triangle object with sides 4.0, 4.0, and 3.2 
// Calculate and display the area and perimeter of each shape 
    cout<<"Circle: "<<endl; 
    cout<<"Area: "<<circle.calculateArea()<<endl;                    // Calculate and output the area of the circle 
    cout<<"Perimeter: "<<circle.calculatePerimeter()<<endl;          // Calculate and output the perimeter of the circle 
    cout<<"\nRectangle: "<<endl; 
    cout<<"Area: "<<rectangle.calculateArea()<<endl;                 // Calculate and output the area of the rectangle 
    cout<<"Perimeter: "<<rectangle.calculatePerimeter()<<endl;       // Calculate and output the perimeter of the rectangle 
    cout<<"\nTriangle: "<<endl; 
    cout<<"Area: "<<triangle.calculateArea()<<endl;                  // Calculate and output the area of the triangle 
    cout<<"Perimeter: "<<triangle.calculatePerimeter()<<endl;        // Calculate and output the perimeter of the triangle 
    return 0;                                                        // Return 0 to indicate successful completion 
} 
#include <iostream>
using namespace std;
class Complex {
    private:
        int real,imag;
    public:
        Complex(int r=0,int i=0):real(r),imag(i){}
        Complex add(const Complex &c){
            Complex t3;                                 // One way of writing complex number
            t3.real=real+c.real;
            t3.imag=imag+c.imag;
            real=t3.real;                               // Changes the real part variable of the calling object
            imag=t3.imag;                               // Changes the imaginary part variable of the calling object
            return t3;

        }
        Complex subtract(const Complex &c) {
            return Complex(real-c.real,imag-c.imag);                // Another way of writing complex number
        }
        void display() const{
            cout<<real<<" + i"<<imag<<endl;
        }
    };
int main() {
    Complex c1(4,5),c2(8,9);
    Complex sum=c1.add(c2);
    Complex diff=c1.subtract(c2);
    cout<<"First Complex Number: ";
    c1.display(); cout<<"Second Complex Number: ";
    c2.display(); cout<<"Addition: ";
    sum.display(); cout<<"Subtraction: ";
    diff.display();
    return 0;
} 
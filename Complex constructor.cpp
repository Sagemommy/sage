#include <iostream>
using namespace std;

class Complex {
private:
    float real; 
    float imag; 
public:

    Complex(float r = 0.0, float i = 0.0) {
        real = r;
        imag = i;
    }

    
    Complex operator+(const Complex &c) {
        return Complex(real + c.real, imag + c.imag);
    }


    Complex operator*(const Complex &c) {
        return Complex(real * c.real - imag * c.imag, real * c.imag + imag * c.real);
    }

    
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {

    Complex c1(3.5, 2.5);
    Complex c2(1.5, 3.0);

    
    Complex c3 = c1 + c2;

    
    Complex c4 = c1 * c2;

    
    cout << "Complex number 1: ";
    c1.display();
    cout << "Complex number 2: ";
    c2.display();
    cout << "Sum: ";
    c3.display();
    cout << "Product: ";
    c4.display();

    return 0;
}







ALGORITHM:

Start
Define a Complex class:
Create private data members real and imag to store the real and imaginary parts of the complex number.
Create a constructor to initialize real and imag with default values of 0.
Implement operator overloading:
Overload the + operator to add two complex numbers.
Overload the * operator to multiply two complex numbers.
Define a display() function:
Print the complex number in the format real + imag i.
In the main() function:
Create two complex number objects using the constructor.
Add the two complex numbers using the + operator.
Multiply the two complex numbers using the * operator.
Display the original numbers, their sum, and their product using the display() function.
End
#include <iostream>
#include "Complex.hpp"

class Complex {
public:

    Complex(double _re, double _im) : re(_re), im(_im) {}

    double real() const {
        return re;
    }

    double imag() const {
        return im;
    }

    Complex Complex::operator-(const Complex &c) {
    return Complex( re + c.re, im + c.im )
    }

    Complex::operator+(const Complex &c) {
    return Complex( re - c.re, im - c.im )
    }

    Complex& Complex::operator+=(const Complex &c) {
    re += c.re;
    im += c.im;
    return *this
    }


    Complex& Complex::operator-=(const Complex &c) {
    re -= c.re;
    im -= c.im;
    return *this
    }


    Complex Complex::operator*(double x) {
    return Complex()
    }


    Complex Complex::operator-() {
    return Complex()
    }

};



int main() {


    return 0;
}

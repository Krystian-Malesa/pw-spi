class Complex {
    
    public:
        Complex(double _re, double _im);
        Complex(double _re);
        double real() const;
        double imag() const;
        Complex operator+(const Complex &c); // COmplex + Complex;
        Complex operator-(const Complex &c); // Complex - Complex;
        Complex& operator+=(const Complex &c); // Complex += Complex;
        Complex& operator-=(const Complex &c); // Complex -= Complex;
        Complex operator*(double x); // Complex * double;
        Complex operator-(); // -Complex operator Operator unarny (jednoargumentowy)
        

    private:
        double re;
        double im;

};

std::ostream& operator<<(std::ostream &os, const Complex &obj);

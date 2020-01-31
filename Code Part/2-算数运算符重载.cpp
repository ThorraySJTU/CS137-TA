#include <iostream>
using namespace std;

class complex{
public:
    complex();
    complex(double real, double imag);
    complex operator+(const complex &A) const;
    complex operator-(const complex &A) const;
    complex operator*(const complex &A) const;
    void display() const;
private:
    double m_real;  //Êµ²¿
    double m_imag;  //Ðé²¿
};
complex::complex(): m_real(0.0), m_imag(0.0){}

complex::complex(double real, double imag): m_real(real), m_imag(imag){}

complex complex::operator+(const complex &A) const{
    complex B;
    B.m_real = this->m_real + A.m_real;
    B.m_imag = this->m_imag + A.m_imag;
    return B;
}

complex complex::operator-(const complex &A) const{
    complex B;
    B.m_real = this->m_real - A.m_real;
    B.m_imag = this->m_imag - A.m_imag;
    return B;
}

complex complex::operator*(const complex &A) const{
    complex B;
    B.m_real = this->m_real * A.m_real - this->m_imag - A.m_imag;
    B.m_imag = this->m_imag * A.m_real + A.m_imag * this->m_real;
    return B;
}

void complex::display() const{
    if(m_imag == 0)
        cout<<m_real<<endl;
    else if(m_real == 0)
        cout<<m_imag<<"i"<<endl;
    else
        cout<<m_real<<" + "<<m_imag<<"i"<<endl;
}

int main(){
    complex c1(2.9, 5.8);
    complex c2(2.4, -5.4);
    complex c3, c4, c5;
    c3 = c1 + c2;
    c4 = c1 - c2;
    c5 = c1 * c2;
    c3.display();
    c4.display();
    c5.display();
    return 0;
}

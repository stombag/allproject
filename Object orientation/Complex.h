#pragma once
#include <iostream>
using namespace std;
class book {
    int _a1;
    int _b;
    int _c;
public :
    book(int a, int b, int c);

    inline void buy();
    
};

inline void book::buy() {
    cout << _a1 << endl;
    cout << _b << showpos <<  _c << endl;

}


class Complex {
private:
    int _real;
    int _imaginary;

public:
    Complex(int real, int imaginary);

    inline void A();



};

inline void Complex::A() {
    std::cout << _real << std::showpos << _imaginary << "i";
    std::cout << std::noshowpos << std::endl;
}
#include <iostream>
#include "complex.hpp"

template <typename T>
Complex<T>::Complex() { real = img = 0; }

template <typename T>
Complex<T>::Complex(T real, T img) { this->real = real; this->img = img; }

template <typename T>
void Complex<T>::display() {
    if (img < 0)
        std::cout << real << " - i" << abs(img) << std::endl;
    else
        std::cout << real << " + i" << img << std::endl;
}

template <typename T>
Complex<T> Complex<T>::addition(Complex<T> c) {
    Complex temp;
    temp.real = real + c.real;
    temp.img = img + c.img;
    return temp;
}

template <typename T>
Complex<T> Complex<T>::operator+(Complex<T> c) {
    Complex temp;
    temp.real = real + c.real;
    temp.img = img + c.img;
    return temp;
}

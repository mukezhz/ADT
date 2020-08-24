#include "iostream"
#include "complex.hpp"

Complex Complex::addition(Complex c) {
    Complex temp((real + c.real), (img + c.img));
    return temp;
}

void Complex::display() {
    if (img < 0)
        std::cout << "Complex no: " << real << " - " << abs(img) << "i" << std::endl;
    else
        std::cout << "Complex no: " << real << " + " << img << "i" << std::endl;

}

#include "iostream"
#include "complex.hpp"
using namespace std;
int main(int argc, char const* argv[])
{
    Complex c1(10, 20);
    Complex c2(10, -40);
    c1.display();
    c2.display();
    Complex c3 = c1.addition(c2);
    c3.display();
    return 0;
}

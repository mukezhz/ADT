#include "complex.cpp"
// .cpp file is include because template cannot be compiled
// if .hpp is included it will work but at linking phase it will generate error
// template must be implemented after declaration

int main(int argc, char const* argv[]) {
    Complex<int> a(5, -10);
    Complex<int> b(10, -20);
    Complex<int> sum = a + b;
    sum.display();
    return 0;
}

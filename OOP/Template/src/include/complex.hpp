#if !defined(__COMPLEX__)
#define __COMPLEX__

template <typename T>
class Complex {
private:
    T real; T img;
public:
    Complex();
    Complex(T real, T img);
    void display();
    Complex addition(Complex);
    Complex operator+ (Complex);
};

#endif // __COMPLEX__

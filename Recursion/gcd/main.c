#include <stdio.h>

/* Using simple mathematics rule 😎
    like: GCD of 2,7
    a b
    2)7(3
     -6
      a b       a->b%a and b->a
      1)2(2
       -2
        a b     a->b%a and b->a
        0)1(
*/
int gcd(int a, int b) {
    return (a == 0) ? b : gcd(b % a, a);
}

int gcdsimple(int a, int b) {
    if (a == 0) return b;
    if (b == 0) return a;
    if (a == b) return a;
    return (a > b) ? gcdsimple(a - b, b) : gcdsimple(a, b - a);


}
int main(int argc, char const* argv[])
{
    int a = 5, b = 17;
    printf("GCD of %d and %d is %d\n", a, b, gcd(a, b));
    printf("GCD of %d and %d is %d\n", a, b, gcdsimple(a = 6, b = 2));
    return 0;
}

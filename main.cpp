// Begin10°. Даны два ненулевых числа. Найти сумму, разность, произведение и частное их квадратов.




#include <stdio.h>
#include <math.h>
int main() {
   double a, b;
    scanf("%lf%lf", &a, &b);
    a = pow(a, 2);
    b = b * b;
    printf("%.2f, %.2f, %.2f, %.2f\n", a+b, a-b, a*a, a/b);
    return 0;
}
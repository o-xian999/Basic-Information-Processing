#include <stdio.h>
#include <math.h>

int main(void) {

double a, b, c;

printf("数値を入力＞");
scanf("%lf", &a);
b = sqrt(a);
printf("%fの平方根は%fです\n", a, b);
c = pow(a, 2);
printf("%fの2乗は%fです\n", a, c);
return 0;

}


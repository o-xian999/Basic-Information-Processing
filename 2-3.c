#include <stdio.h>
#include <math.h>

int main(void) {

double a, b;

printf("数値を入力＞");
scanf("%lf", &a);
b = log10(a);
printf("%fの常用対数は%fです\n", a, b);
return 0;

}


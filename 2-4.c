#include <stdio.h>
#include <math.h>

int main(void) {

double a, b, c;

printf("辺aの値を入力＞");
scanf("%lf", &a);
printf("辺bの値を入力＞");
scanf("%lf", &b);
c = sqrt(pow(a, 2) + pow(b, 2));
printf("辺a:%f, 辺b:%f, 辺c:%f\n", a, b, c);
return 0;

}

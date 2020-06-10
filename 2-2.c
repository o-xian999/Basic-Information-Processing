#include <stdio.h>
#include <math.h>

int main(void) {

double a, b, c, d;

printf("数値を入力＞");
scanf("%lf", &a);
b = a/180*M_PI; //度数法を弧度法に変換
c = sin(b);
printf("%fの正弦は%fです\n", a, c);
d = cos(b);
printf("%fの余弦は%fです\n", a, d);
return 0;

}


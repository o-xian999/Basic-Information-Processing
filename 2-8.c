#include <stdio.h>

int main(void) {
double a, b, c;

printf("身長[cm]を入力してください>");
scanf("%lf", &b);
printf("体重[kg]を入力してください>");
scanf("%lf", &a);

b /= 100; //[cm]を[m]になおす
c = a / (b * b);

printf("BMIは%fです。\n", c);

if(c < 25){
printf("肥満ではありません!\n");
}
if(c >= 25){
printf("肥満です…生活習慣を改善しましょう…\n");
}

return 0;

}

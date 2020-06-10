#include <stdio.h>

int main(void){
double x, y, z;

printf("あなたの体重[kg]をを入力してください＞");
scanf("%lf", &x);
printf("あなたの身長[cm]を入力してください＞");
scanf("%lf", &y);

y /= 100;

z = x / (y * y);
printf("あなたのBMIは%.3fになります\n", z);
}

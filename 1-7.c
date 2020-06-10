#include <stdio.h>

int main(void){
int x, y, z;

printf("１つ目の数値を入力してください＞");
scanf("%d", &x);
printf("２つ目の数値を入力してください＞");
scanf("%d", &y);

z = x * y;
printf("２つの数値をかけると%dになります\n", z);
}

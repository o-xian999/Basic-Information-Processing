#include <stdio.h>

int main(void) {

int a;

printf("整数入力＞");
scanf("%d", &a);

if (a == 17) {
printf("%dは17です\n", a);
}

if (a != 17) {
printf("%dは17ではありません\n", a);
}

if (a < 17) {
printf("%dは17より小さい数です\n", a);
}

if (a <= 17) {
printf("%dは17以下の数です\n", a);
}

if (a > 17) {
printf("%dは17より大きい数です\n", a);
}

if (a >= 17) {
printf("%dは17以上の数です\n", a);
}


return 0;

}

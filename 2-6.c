#include <stdio.h>

int main(void) {

int a, b;

printf("整数入力＞");
scanf("%d", &a);

b = a % 3;

if (b == 0) {
printf("%dは3の倍数です\n", a);
} else {
printf("%dは3の倍数ではありません\n", a);
}

return 0;

}

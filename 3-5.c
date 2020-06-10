#include <stdio.h>

int main(void) {
int a, b;

printf("生まれた年(西暦)は?--->");
scanf("%d", &a);

b = a % 4;

switch(b){
case 0:
printf("夏季オリンピック\n");
break;

case 2:
printf("冬季オリンピック\n");
break;

default:
printf("非開催年\n");
break;
}
return 0;
}

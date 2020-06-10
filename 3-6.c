#include <stdio.h>

int main(void) {
int a, b;

printf("生まれた年(西暦)は?--->");
scanf("%d", &a);

b = a % 12;

switch(b){
case 4:
printf("子\n");
break;

case 5:
printf("丑\n");
break;

case 6:
printf("寅\n");
break;

case 7:
printf("卯\n");
break;

case 8:
printf("辰\n");
break;

case 9:
printf("巳\n");
break;

case 10:
printf("午\n");
break;

case 11:
printf("未\n");
break;
case 0:
printf("申\n");
break;

case 1:
printf("酉\n");
break;

case 2:
printf("戌\n");
break;

case 3:
printf("亥\n");
break;
}
return 0;
}

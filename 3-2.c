#include <stdio.h>

int main(void) {
double a, b, c;

printf("辺aの長さは?--->");
scanf("%lf", &a);
printf("辺bの長さは?--->");
scanf("%lf", &b);
printf("辺cの長さは?--->");
scanf("%lf", &c);

if(a == b || b == c){
printf("二等辺三角形です\n");
}else{
printf("二等辺三角形ではありません\n");
}

return 0;
}

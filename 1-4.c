#include <stdio.h>

int main(void) {
int x, y, z;
int u, v, w;

x = 6;
y = 7;
u = 9;
v = 6;

z = x + y;
w = u - v;

printf("%d 足す %d は %d です\n", x, y, z);
printf("%d 引く %d は %d です\n", u, v, w);
}

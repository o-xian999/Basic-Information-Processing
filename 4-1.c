#include <stdio.h>
int main(){

  int a = 1;

  while(a <= 100){

    printf("%d : ", a);

    if(a % 10 == 0)printf("\n");

    a++;

  }

  return 0;

}

#include <stdio.h>

int main(void){
  int a = 1;
  for(a; a <= 9; a++){
    int b = 1;
    for(b; b <= 9; b++){
      printf("%d : ", a * b);
    }
    printf("\n");
  }
  return 0;
}

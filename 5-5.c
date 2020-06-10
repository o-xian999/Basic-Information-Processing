#include <stdio.h>

int main(void){
  int a = 1;
  for(a; a <= 7; a++){
    int b = 1;
    for(b; b <= a; b++){
      printf("+");      
    }
    printf("\n");
  }
}

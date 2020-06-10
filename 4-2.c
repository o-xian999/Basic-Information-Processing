#include <stdio.h>
int main(){
  int a = 1, b = 1, c;
  while(a <= 9){
    c = a * b;
    printf("%d : ", c);
    if(b == 9){
      printf("\n");
      a++;
      b = 1;
    }else{
      b++;
    }
  }
  return 0;

}

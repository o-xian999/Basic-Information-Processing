#include <stdio.h>

int main(void){
  for(int i = 1; i <= 366; i++){
    int x = i % 7;
    switch(x){
      case 0:
        printf("%d 火:", i);
        break;
      case 1:
        printf("%d 水:", i);
        break;
      case 2:
        printf("%d 木:", i);
        break;
      case 3:
        printf("%d 金:", i);
          break;
      case 4:
        printf("%d 土:", i);
        break;
      case 5:
        printf("%d 日:", i);
        break;
      case 6:
        printf("%d 月:", i);
        break;
    }
  }
  return 0;
}

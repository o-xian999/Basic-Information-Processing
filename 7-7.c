#include <stdio.h>

int smallestFactor(int x){
  int n = 2;
  while(1){
    if(x % n == 0){
      return n;
    }
    n++;
  }
}

int main(void){
  int number, result;
  printf("正の整数を入力してくださいー＞");
  scanf("%d", &number);
  result = smallestFactor(number); //最小約数を算出
  printf("%dの最小約数は%dです！\n", number, result);
}



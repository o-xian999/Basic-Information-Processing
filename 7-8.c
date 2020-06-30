#include <stdio.h>

void primeFactors(int x){
  int n = 2;
  while(1){
    if(x % n == 0){
      printf("%dの最小約数は%dです\n", x, n);
      if(x == n)break;
      x /= n;
      n = 2;
    }else n++;
  }
}

int main(void){
  int number;
  printf("正の整数を入力してくださいー＞");
  scanf("%d", &number);
  primeFactors(number); //素因数の計算および表示
}

#include <stdio.h>

int main(void){
  int a, b, c, ans = 0;
  int flag = 1;
  printf("数値を入力してくださいー＞");
  scanf("%d", &a);
  printf("%dの約数を表示します\n", a);
  //printf("\n");
  b = 1;
  while(b <= a) {
    c = a % b;
    if (c == 0) {
      printf(" %d :", b);
      ans++;
      if(b != 1 && b != a)flag = 0;
    }
    b++;
  }
  printf("\n");
  printf("%dの約数は%d個です\n", a, ans);
  if(flag){
    printf("%dは素数です\n", a);
  }else{
    printf("%dは素数ではありません\n", a);
  }

  return 0;


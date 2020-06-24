#include <stdio.h>

int func_bigger(int a, int b){
  //a,bの大きい方の値を返却
  if(a > b)return a;
  else return b;
} 

int func_common_mul(int a, int b, int c){   
  //cがa,bの公倍数なら1、公倍数でないなら0を返却
  if(c % a == 0 && c % b == 0)return 1;
  else return 0;
} 

int main(void){
  int x, y, z, i;

  printf("１つ目の数字を入力してください＞");
  scanf("%d", &x);

  printf("２つ目の数字を入力してください＞");
  scanf("%d", &y);

  printf("%dと%dの最小公倍数を表示します\n", x, y);

  i = func_bigger(x, y);

  while( func_common_mul(x, y, i)==0 ) {
    i++;
  }

  printf("%d\n", i);
}

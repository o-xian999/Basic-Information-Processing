#include <stdio.h>

int div, mod;    //ファイルスコープ有効（グローバル変数）
void noReturn(int x, int y);    //プロトタイプ宣言

int main(void){
  int a, b;
  printf("１つめの数字を入力しEnter（Return）を押してくださいーー＞");
  scanf("%d", &a);
  printf("%dが入力されました\n", a);

  printf("２つめの数字を入力しEnter（Return）を押してくださいーー＞");
  scanf("%d", &b);
  printf("%dが入力されました\n", b);
  printf("\n");

  noReturn(a, b);    //aとbを関数に渡す。返却値は無いが、グローバル変数bigとsmallに値がセットされる。

  printf("%d ÷ %d は %d です！\n", a, b, div);
  printf("余りは%dです！\n", mod);
}

void noReturn(int x, int y){  //２つの引数のうち、大きい方の値をbigに、小さい方の値をsmallに代入する関数
  div = x / y;
  mod = x % y;
}


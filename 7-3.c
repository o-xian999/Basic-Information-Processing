#include <stdio.h>

int a, b;    //ファイルスコープ有効（グローバル変数）
int div, mod;    //ファイルスコープ有効（グローバル変数）

void noParam(void);    //プロトタイプ宣言
int numAsk(int n);    //プロトタイプ宣言
void noReturn(int x, int y);    //プロトタイプ宣言

int main(void){
  noParam();    //aとbに数値をキーボード入力する関数。引数・返却値は無いがグローバル変数aとbに値がセットされる
  noReturn(a, b);    //aとbを関数に渡す。返却値は無いが、グローバル変数bigとsmallに値がセットされる。

  printf("%d ÷ %d は %d です！\n", a, b, div);
  printf("余りは%dです！\n", mod);
}

void noParam(void){
  a = numAsk(1);
  b = numAsk(2);
  printf("\n");
}

int numAsk(int n){
  int input;
  printf("%dつめの数字を入力しEnter（Return）を押してくださいーー＞", n);
  scanf("%d", &input);
  printf("%dが入力されました\n", input);
  return input;
}

void noReturn(int x, int y){     //２つの引数のうち、大きい方の値をbigに、小さい方の値をsmallに代入する関数
  div = x / y;
  mod = x % y;
}

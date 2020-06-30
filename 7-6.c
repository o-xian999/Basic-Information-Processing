#include <stdio.h>

int func_smaller(int a, int b){
  //a,bの小さい方の値を返却するコードをここに入れる
  if(a > b)return b;
  else return a;
} 

int func_common_div(int a, int b, int c){
  //cがa,bの公約数なら1、公約数でないなら0を返却するコードをここに入れる
  // （aをcで割った余りが0　かつ　bをcで割った余りが0）   ならば　１を返却
  //　それ以外は0を返却
  if(a % c == 0 && b % c == 0)return 1;
  else return 0;
} 

int max(int x, int y){
  if(x > y)return x;
  else return y;
}

int main(void){
  int x, y, i, small, ans = 0;

  printf("１つ目の数字を入力してください＞");
  scanf("%d", &x);
  printf("２つ目の数字を入力してください＞");
  scanf("%d", &y);

  printf("%dと%dの最大公約数を表示します\n", x, y);

  small = func_smaller(x, y);
  for ( i = 1 ; i <= small ; i++ ) {
    if ( func_common_div(x, y, i) )ans = max(ans, i);
  }
  printf("最大公約数は%dです\n", ans);

}


#include <stdio.h>

int main(void){
  char a[52], b[52];         //文字列格納用の１次元配列宣言
  printf("姓を入力して下さい＞");
  scanf("%s", a);          //文字列のキーボード入力
  printf("名を入力してください＞");
  scanf("%s", b);
  printf("あなたは　%s　%s 　さんですね！\n", a, b);          //文字列の画面表示
}

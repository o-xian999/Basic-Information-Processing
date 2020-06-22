#include <stdio.h>

int yakusuCount(int n);  //プロトタイプ宣言

int main(void){
  int number, count;
  printf("正の整数を入力してくださいー＞");
  scanf("%d", &number);
  count = yakusuCount(number); //約数の数を算出
  printf("%dの約数は%d個です！\n", number, count);   

  //課題６−３のコードをここに入れる

}

int yakusuCount(int n){  //正の整数の約数の個数を数えて返却する関数
  int result=0;

  //繰り返し処理を使ってnの約数を数え、結果をresultに格納
  for(int a = 1; a <= n; a++){
    if(n % a == 0)result++;
  }
  return result;

}

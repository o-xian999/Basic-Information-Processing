#include <stdio.h>
#include <string.h> //strcpy, strcat, strcmpに必要

int main(void){
  char a[10][52], b[10][52], c[10][52];  //10名分の名前データ配列
  int id[10];   //学籍番号用
  int num, i;
  printf("何人ですか？＞");
  scanf("%d", &num);          //データ人数のキーボード入力
  for (i = 0; i < num; i++) {
    printf("学籍番号下４桁を入力して下さい＞");
    scanf("%d", &id[i]);          //学籍番号のキーボード入力
    printf("姓を入力して下さい＞");
    scanf("%s", a[i]);          //文字列のキーボード入力
    printf("名を入力して下さい＞");
    scanf("%s", b[i]);          //文字列のキーボード入力
    printf("性別を入力してください＞");
    scanf("%s", c[i]);
  }
  //データの画面表示
  printf("\n");
  for (i = 0; i < num; i++) {
    printf("学籍：%d　氏名：%s %s　性別：%s\n", id[i], a[i], b[i], c[i]);
  }

}

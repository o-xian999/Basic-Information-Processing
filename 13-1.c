#include <stdio.h>
#include <string.h> //strcpy, strcat, strcmpに必要

typedef struct {  //以下を構造体として定義
    int id; //学籍番号用の変数
    int height; //身長用の変数
    char Lname[64]; //姓用の変数
    char Fname[64]; //名用の変数
} studentData;  //構造体として作成した変数型の名前

int main(void){
   int num, i;
   studentData sd[10];  //10名分データ用の構造体配列
   printf("何人ですか？＞");
   scanf("%d", &num);          //データ人数のキーボード入力

   for (i = 0; i < num; i++) {
      printf("学籍番号下４桁を入力して下さい＞");
      scanf("%d", &sd[i].id);          //学籍番号のキーボード入力
      printf("姓を入力して下さい＞");
      scanf("%s", sd[i].Lname);          //文字列のキーボード入力
      printf("名を入力して下さい＞");
      scanf("%s", sd[i].Fname);          //文字列のキーボード入力
      printf("身長を入力してください＞");
      scanf("%d", &sd[i].height);
   }
   //データの画面表示
   printf("\n");
   for (i = 0; i < num; i++) {
      printf("学籍：%d　氏名：%s %s　身長：%dcm\n", sd[i].id, sd[i].Lname, sd[i].Fname, sd[i].height);
   }
}

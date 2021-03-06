#include <stdio.h>
#include <string.h> //strcpy, strcat, strcmpに必要

typedef struct {  //以下を構造体として定義
  int id; //学籍番号用の変数
  int height;
  char Lname[64]; //姓用の変数
  char Fname[64]; //名用の変数
} studentData;  //構造体として作成した変数型の名前

studentData dataInput(void){
  studentData sData;
  printf("学籍番号下４桁を入力して下さい＞");
  scanf("%d", &sData.id);          //学籍番号のキーボード入力
  printf("姓を入力して下さい＞");
  scanf("%s", sData.Lname);          //文字列のキーボード入力
  printf("名を入力して下さい＞");
  scanf("%s", sData.Fname);          //文字列のキーボード入力
  printf("身長を入力して下さい＞");
  scanf("%d", &sData.height);
  return sData;
}

int main(void){
  int num, i, shift;
  studentData sd[10], temp;  //10名分データ用の構造体配列
  printf("何人ですか？＞");
  scanf("%d", &num);          //データ人数のキーボード入力
  for (i = 0; i < num; i++) {
    sd[i] = dataInput();
  }
  //データの画面表示
  printf("\n");
  for (i = 0; i < num; i++) {
    printf("番号：%d 学籍：%d　氏名：%s %s　身長：%dcm\n", i+1, sd[i].id, sd[i].Lname, sd[i].Fname, sd[i].height);
  }

  for(int i = 0; i < num; i++){
    for(int j = i + 1; j < num; j++){
      if(sd[i].height > sd[j].height){
        temp = sd[i];
        sd[i] = sd[j];
        sd[j] = temp;
      }
    }
  }

  printf("\n");
  for(int i = 0; i < num; i++){
    printf("番号：%d 学籍：%d　氏名：%s %s 身長：%dcm\n", i + 1, sd[i].id, sd[i].Lname, sd[i].Fname, sd[i].height);
  }
}


#include <stdio.h>

int main(void){
  int num, id[10], es[10][6], jhs[10][3], hs[10][3];
  printf("\n何人ですか？＞");
  scanf("%d", &num);

  for(int i = 0; i < num; i++){//全人数でループ
    printf("%d人目の学籍番号下4桁は?＞", i + 1);
    scanf("%d", &id[i]);
    printf("\n");

    for(int j = 0; j < 6; j++){
      printf("小学%d年生のクラス番号を入力してください＞", j + 1);
      scanf("%d", &es[i][j]);
    }
    printf("\n");

    for(int j = 0; j < 3; j++){
      printf("中学%d年生のクラス番号を入力してください＞", j + 1);
      scanf("%d", &jhs[i][j]);
    }
    printf("\n");

    for(int j = 0; j < 3; j++){
      printf("高校%d年生のクラス番号を入力してください＞", j + 1);
      scanf("%d", &hs[i][j]);
    }
    printf("\n");
  }

  for(int i = 0; i < num; i++){
    printf("%d人目 : %d\n", i + 1, id[i]);
    printf("小学校  ");
    for(int j = 0; j < 6; j++){
      printf("%d年%d組(es[%d][%d])   ", j + 1, es[i][j], i, j);
    }
    printf("\n");
    printf("中学校  ");
    for(int j = 0; j < 3; j++){
      printf("%d年%d組(jhs[%d][%d])   ", j + 1, jhs[i][j], i, j);
    }
    printf("\n");
    printf("高校校  ");
    for(int j = 0; j < 3; j++){
      printf("%d年%d組(hs[%d][%d])   ", j + 1, hs[i][j], i, j);
    }
    printf("\n");
  }
  return 0;
}

#include <stdio.h>

int main(void){
  int  i, num;
  int id[10], height[10]; //学籍番号用の配列　最大１０人分
  printf("\n");     //表示を見やすくするため
  printf("全部で何人ですか？＞");
  scanf("%d", &num);
  printf("\n");     //表示を見やすくするため

  for ( i = 0 ; i < num ; i++) {  //データの入力
    printf("%d人目の学籍番号下４桁を入力してください＞", i+1);
    scanf("%d", &id[i]);
    printf("%d人目の身長を入力相手ください＞", i+1);
    scanf("%d", &height[i]);
  }
  printf("\n");     //表示を見やすくするため

  for ( i = 0 ; i < num ; i++) {  //入力したデータの表示
    printf("%d人目：学籍 %d 身長 %dcm\n", i+1, id[i], height[i]);
  }
  printf("\n");     //表示を見やすくするため
}

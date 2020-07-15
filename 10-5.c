#include <stdio.h>

int id[10], height[10]; //学籍番号用の配列　最大１０人分
double shoeSize[10];

void data_input(int n){  //キーボードからのデータ入力
  int  i;
  printf("\n");     //表示を見やすくするため
  for ( i = 0 ; i < n ; i++) {  //データの入力
    printf("%d人目の学籍番号下４桁を入力してください＞", i+1);
    scanf("%d", &id[i]);
    printf("%d人目の身長を入力してください＞", i + 1);
    scanf("%d", &height[i]);
    printf("%d人目の靴のサイズを入力してください＞", i + 1);
    scanf("%lf", &shoeSize[i]);
  }
  printf("\n");     //表示を見やすくするため
  for ( i = 0 ; i < n ; i++) {  //入力したデータの表示
    printf("%d人目：学籍 %d 身長 %dcm 靴サイズ %.1fcm\n", i+1, id[i], height[i], shoeSize[i]);
  }
  printf("\n");     //表示を見やすくするため
}

void file_save(int n){  //データをファイルに書き出す
  int i;
  FILE *fp;     /*ファイルポインタ（ファイルを示す変数）の宣言*/ 
  fp = fopen("data_task5.txt", "w");     /*ファイルを書き込みモードで開く*/
  for ( i = 0 ; i < n ; i++) {
    fprintf(fp, "%d\t%d\t%d\t%.1f\n", i+1, id[i], height[i], shoeSize[i]);      /* 　\t　はタブ　*/   
  } 
  fclose(fp);     /*ファイルを閉じる*/
  printf("データをdata_task5.txtに書き出しました\n");
  printf("\n");     //表示を見やすくするため
}
int main(void){
  int num;
  printf("\n");     //表示を見やすくするため
  printf("全部で何人ですか？＞");
  scanf("%d", &num);
  data_input(num);  //キーボードからのデータ入力関数
  file_save(num);  //データをファイルに書き出す関数
}


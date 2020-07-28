#include <stdio.h>

/*配列の合計を計算する関数*/

void array_sum(int n, int *array, int *ans, int *ans2){
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    *ans += array[i];
    cnt++;
    //printf("%d\n", ans);
  }
  *ans2 = *ans / cnt;

}

int main(void){
  int  i, num, sum = 0, ave = 0;
  int height[10];  //ブロックスコープでの配列宣言
  printf("\n");     //表示を見やすくするため
 
  printf("全部で何人ですか？＞");
  scanf("%d", &num);
  printf("\n");     //表示を見やすくするため
  for ( i = 0 ; i < num ; i++) {  //データの入力
    printf("%d人目の身長を入力してください＞", i+1);
    scanf("%d", &height[i]);
  }
  printf("\n");     //表示を見やすくするため
  for ( i = 0 ; i < num ; i++) {  //入力したデータの表示
    printf("%d人目：%d\n", i+1, height[i]);
  }
  printf("\n");     //表示を見やすくするため    

  array_sum(num, height, &sum, &ave);  //データ数numと配列の先頭アドレスheightを関数array_sumに渡す
  printf("身長の合計値は%dです\n", sum);
  printf("身長の平均値は%dです\n", ave);
  printf("\n");     //表示を見やすくするため    
}


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

void array_sum2(int n2, double *array2, double *ans2, double *ans2_2){
  int cnt2 = 0;
  for(int i = 0; i < n2; i++){
    *ans2 += array2[i];
    cnt2++;
  }
  *ans2_2 = *ans2 / cnt2;
}

void array_max_min(int n, int *array, int *max, int *min){
  for(int i = 0; i < n; i++){
    if(*max < array[i])*max = array[i];
    //printf("%d\n", *max);
    if(*min > array[i])*min = array[i];
    //printf("%d\n", *min);
  } 
}

void array_max_min_show(int n2, double *array2, double *max2, double *min2){
  for(int i = 0; i < n2; i++){
    if(*max2 < array2[i])*max2 = array2[i];
    if(*min2 > array2[i])*min2 = array2[i];
  }
}

int main(void){
  int i, num, sum = 0, ave = 0;
  double sum2 = 0, ave2 = 0;
  int ans_min = 100000000;
  int ans_max = 0;
  double ans_min_shoe = 1000000;
  double ans_max_shoe = 0;
  int height[10];  //ブロックスコープでの配列宣言
  double shoeSize[10];
  printf("\n");     //表示を見やすくするため
 
  printf("全部で何人ですか？＞");
  scanf("%d", &num);
  printf("\n");     //表示を見やすくするため
  for ( i = 0 ; i < num ; i++) {  //データの入力
    printf("%d人目の身長を入力してください＞", i+1);
    scanf("%d", &height[i]);
    printf("%d人目の靴のサイズを入力してください＞", i + 1);
    scanf("%lf", &shoeSize[i]);
  }
  printf("\n");     //表示を見やすくするため
  for ( i = 0 ; i < num ; i++) {  //入力したデータの表示
    printf("%d人目：身長%d　靴サイズ%f\n", i+1, height[i], shoeSize[i]);
  }
  printf("\n");     //表示を見やすくするため    

  array_sum(num, height, &sum, &ave);  //データ数numと配列の先頭アドレスheightを関数array_sumに渡す
  array_sum2(num, shoeSize, &sum2, &ave2);
  array_max_min(num, height, &ans_max, &ans_min);
  array_max_min_show(num, shoeSize, &ans_max_shoe, &ans_min_shoe);
  printf("合計値 身長：%d　靴：%f\n", sum, sum2);
  printf("平均値 身長：%d  靴：%f\n", ave, ave2);
  printf("最大値 身長：%d  靴：%f\n", ans_max, ans_max_shoe);
  printf("最大値 身長：%d　靴：%f\n", ans_min, ans_min_shoe);
  //printf("身長の最大値は%dです\n", ans_max);
  //printf("身長の最小値は%dです\n", ans_min);
  printf("\n");     //表示を見やすくするため    
}




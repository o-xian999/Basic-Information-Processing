#include <stdio.h>

int intMax(int x, int y){//int用最大値関数
  if(x > y)return x;
  else return y;
}
int intMin(int x, int y){//int用最小値関数
  if(x > y)return y;
  else return x;
}
double doubleMax(double x, double y){//double用最大値関数
  if(x > y)return x;
  else return y;
}
double doubleMin(double x, double y){//double用最小値関数
  if(x > y)return y;
  else return x;
}

int main(void){
  int  i, num, heightAve = 0, heightMax = 0, heightMin = 10000;
  double sizeAve = 0, sizeMax = 0, sizeMin = 10000;
  int id[10], height[10]; //学籍番号用の配列　最大１０人分
  double shoeSize[10];
  printf("\n");     //表示を見やすくするため
  printf("全部で何人ですか？＞");
  scanf("%d", &num);
  printf("\n");     //表示を見やすくするため

  for ( i = 0 ; i < num ; i++) {  //データの入力
    printf("%d人目の学籍番号下４桁を入力してください＞", i+1);
    scanf("%d", &id[i]);
    printf("%d人目の身長を入力相手ください＞", i+1);
    scanf("%d", &height[i]);
    printf("%d人目の靴のサイズ(cm)を入力してください＞", i+1);
    scanf("%lf", &shoeSize[i]);
  }

  for(int i = 0; i < num; i++){//まず総和を求める
    heightAve += height[i];
    sizeAve += shoeSize[i];
  }

  //人数で総和を割る
  heightAve /= num;
  sizeAve /= num;

  for(int i = 0; i < num; i++){//最大値、最小値を各変数に代入していく
    heightMax = intMax(height[i], heightMax);
    heightMin = intMin(height[i], heightMin);
    sizeMax = doubleMax(shoeSize[i], sizeMax);
    sizeMin = doubleMin(shoeSize[i], sizeMin);  
  }
  printf("\n");     //表示を見やすくするため

  for ( i = 0 ; i < num ; i++) {  //入力したデータの表示
    printf("%d人目：学籍 %d 身長 %dcm 靴サイズ %.1fcm\n", i+1, id[i], height[i], shoeSize[i]);
  }
  printf("平均値：身長 %d 靴サイズ %.1f\n", heightAve, sizeAve);
  printf("最大値：身長 %d 靴サイス %.1f\n", heightMax, sizeMax);
  printf("最小値：身長 %d 靴サイス %.1f\n", heightMin, sizeMin);

  printf("\n");     //表示を見やすくするため

  int a;
  printf("検索する身長を入力してください。＞");
  scanf("%d", &a);
  for(int i = 0; i < num; i++){
    if(a == height[i])printf("%d人目：学籍 %d 身長 %dcm 靴サイズ %.1fcm\n", i+1, id[i], height[i], shoeSize[i]);
  }
}



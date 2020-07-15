#include <stdio.h>

int id[10], height[10]; //学籍番号用の配列　最大１０人分
int serialNumber[10]; //データの通し番号用の配列　最大１０人分
double shoeSize[10];

int file_read(void){  //データを配列に読み込む
  int n, end;
  FILE *fp;      /*ファイルポインタ（ファイルを示す変数）の宣言*/ 
  fp = fopen("data_task5.txt", "r");     /*ファイルを読み込みモードで開く*/
  n = 0;    
  while(1) {      /*無限ループ：ファイルの終わりを検出して読み込みをやめる*/
    /*２個（２列）の数値を２変数に読み込み*/
    end = fscanf(fp, "%d %d %d %lf", &serialNumber[n], &id[n], &height[n], &shoeSize[n]);
    /*ファイルの終わりに達したらwhileループを抜ける*/
    if (end == EOF) {
      break;     /*ループを終了する命令*/
    }
    n++;
  }
  return n;
}

int heightAverage(int x){
  int ans = 0;
  for(int i = 0; i < x; i++){
    ans += height[i];
  }
  printf("身長平均値：%dcm\n", ans / x);
}

double shoeAverage(double x){
  double ans2 = 0;
  for(int i = 0; i < x; i++){
    ans2 += shoeSize[i];
  }
  printf("靴のサイズ平均値：%.1fcm\n", ans2 / x);
}

void data_display(int n){  //読み込んだデータを画面表示
  int i;
  printf("\n"); 
  printf("読み込んだデータを表示します\n");
  printf("\n"); 
  for ( i = 0 ; i < n ; i++) {
    printf("%d\t学籍番号：%d\t身長：%dcm 靴のサイズ：%.1f\n", serialNumber[i], id[i], height[i], shoeSize[i]);
  }
  printf("\n");
}

int isSearch(int x){
  int nmb;
  printf("学籍番号を入力してください＞");
  scanf("%d", &nmb);
  for(int i = 0; i < x; i++){
    if(nmb == id[i])printf("%d人目：学籍 %d 身長 %d 靴のサイズ %.1f\n", i + 1, id[i], height[i], shoeSize[i]);
  }
}

int main(void){
  int num, i;
  num =  file_read();  //データを配列に読み込む関数
  data_display(num);  //読み込んだデータを画面表示する関数
  heightAverage(num);
  //num = double(num);
  shoeAverage(num);
  isSearch(num);
}




#include <stdio.h>

int yakusuCount(int n);  //プロトタイプ宣言
int isPrime(int n);  //プロトタイプ宣言
int allPrime(int n);  //プロトタイプ宣言

int main(void){
  int number;
  printf("正の整数を入力してくださいー＞");
  scanf("%d", &number);
  allPrime(number);
}

int allPrime(int n){
  int ans = 0;
  printf("%d以下の素数を表示します。\n", n);
  //for文およびisPrime関数を使用し関数内部を作成せよ（課題6-5）
  //1からnまでの整数に対して、素数であるかどうかを調べる
  for(int j = 1; j <= n; j++){
    if(isPrime(j)){
      printf("%d : ", j);
      ans++;
    }
  }
  printf("\n");
  printf("%d以下の素数は%d個です。\n", n, ans);
  return 0;
}

int isPrime(int n){  //nが素数か否かを1/0で返却する関数   
  int count;
  count = yakusuCount(n); //約数の数を算出
  //countの値が2なら1を返却
  if(count == 2)return 1;
  //countの値が3以上なら0を返却
  else return 0;
}

int yakusuCount(int n){  //正の整数の約数の個数を数えて返却する関数
  //課題６−２で作成したコード
  int cnt = 0;
  for(int i = 1; i <= n; i++){
    if(n % i == 0)cnt++;
  }
  return cnt;
}



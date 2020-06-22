#include <stdio.h>

int yakusuCount(int n);  //プロトタイプ宣言
int isPrime(int n);  //プロトタイプ宣言

int main(void){
  int number, answer;
  printf("正の整数を入力してくださいー＞");
  scanf("%d", &number);
  answer = isPrime(number); //numberが素数なら１、素数でなければ０がanswerに格納される
  if(number == 1)printf("1は素数ではありません！");
  else if(answer) printf("%dは素数です！\n", number); 
  else printf("%dは素数ではありません！\n", number);
}

int isPrime(int n){  //nが素数か否かを1/0で返却する関数   
  int count;
  count = yakusuCount(n); //約数の数を算出

  //続きを作成せよ

  //countの値が2なら1を返却
  if(count == 2 || count == 1)return 1;
  //countの値が3以上なら0を返却
  else return 0;
}

int yakusuCount(int n){  //正の整数の約数の個数を数えて返却する関数
  int cnt = 0;
  //課題６−２で作成したコード
  for(int i = 1; i <= n; i++){
    if(n % i == 0)cnt++;
  }
  return cnt;
}

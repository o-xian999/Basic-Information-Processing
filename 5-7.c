#include <stdio.h>

int main(void){
  int a, b, c, n, count = 0, ans = 0;
  printf("数値を入力してください->");
  scanf("%d", &n);
  printf("%d以下の素数を表示します。\n", n);

  for(a = 2; a <= n; a++){
    b = 1;
    count = 0;
    while(b <= a){
      c = a % b;
      if(c == 0){
        count++;
      }
      b++;
    }
    if(count == 2){
      printf("%d : ", a);
      ans++;
    }
  }

  printf("\n%d以下の素数は%d個あります。\n", n, ans);
}

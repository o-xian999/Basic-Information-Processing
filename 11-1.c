#include <stdio.h>
//ポインタにより２変数のデータをmain関数と共有
//第１引数と第２引数の計算結果を第３・第４引数に代入
//戻り値は無いが、データ共有によって計算結果がmain関数に反映される

void daishou(int x, int y, int *pz1, int *pz2){
  if(x < y){
    *pz1 = y;
    *pz2 = x;
  }else{
    *pz1 = x;
    *pz2 = y;
  }
}
  
int main(void){
    int a, b, c1, c2;

    printf("1番目の数字は?＞");
    scanf("%d", &a);
    printf("2番目の数字は?＞");
    scanf("%d", &b);

    daishou(a, b, &c1, &c2);   //関数にa, bの２変数の値と、c1, c2の２変数のアドレスを渡す
    printf("大きい方の値は%dです\n", c1);
    printf("小さい方の値は%dです\n", c2);
}




#include  <stdio.h>



int main(void){



  int cont;/* 処理を続けるか */

  int total = 0, num_even = 0, num_odd = 0;/* 入力数を数える */



  do {

    int no;

    printf("整数を入力してください：");

    scanf("%d", &no);

    total++;/* 入力数をカウントアップ */



    printf("%d個目：", total);

    if (no % 2) {

      puts("その数は奇数です。");

      num_odd++;

    } else {

      puts("その数は偶数です。");

      num_even++;

    }

    printf("\nもう一度？【Yes…0／No…9】：");

    scanf("%d", &cont);

    printf("\n");

  } while (cont == 0);



  printf("%d個の数が入力されました\n", total);

  printf("奇数は%d個です\n", num_odd);

  printf("偶数は%d個です\n", num_even);

  printf("\n");
  return (0);

}

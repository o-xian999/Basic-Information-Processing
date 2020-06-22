#include <stdio.h>

int dayCount(int m, int d);  //プロトタイプ宣言

int main(void)
{
  int month, day, total;

  printf("月を入力してくださいー＞");
  scanf("%d", &month);

  printf("日を入力してくださいー＞");
  scanf("%d", &day);

  total = dayCount(month, day); //月と日から年間通算日数を算出

  printf("%d月%d日は年間通算%d日目です！\n", month, day, total);   

  printf("%d月%d日は", month, day);

  int x = total % 7;
  switch(x){
    case 0:
      printf("火曜日です！\n");
      break;
    case 1:
      printf("水曜日です！\n");
      break;
    case 2:
      printf("木曜日です！\n");
      break;
    case 3:
      printf("金曜日です！\n");
      break;
    case 4:
      printf("土曜日です！\n");
      break;
    case 5:
      printf("日曜日です！\n");
      break;
    case 6:
      printf("月曜日です！\n");
      break;
  }
  return 0;

}

int dayCount(int m, int d)  //月と日の値から年間通算日数を計算し返却する関数
{
  int i, j, k, count=0;

  for (i = 1; i <= m; i++) {
    if (i == m) k = d;
    else {
      switch(i) {
        case 1: k = 31; break;
        case 2: k = 29; break;
        case 3: k = 31; break;
        case 4: k = 30; break;
        case 5: k = 31; break;
        case 6: k = 30; break;
        case 7: k = 31; break;
        case 8: k = 31; break;
        case 9: k = 30; break;
        case 10: k = 31; break;
        case 11: k = 30; break;
        case 12: k = 31; break;
        default: k = 0; break;
      }
    }

    count += k;  //count = count + k;

  }

  return count;

}

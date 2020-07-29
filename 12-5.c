#include <stdio.h>

int main(void){
  int n = 0, id[][52];
  char a[][52];
  char sei[][52], mei[][52], sex[][52];
  FILE *fp;
  fp = fopen("meibo.txt", "r");
  
  while(1){
    a = fscanf(fp, %d %s %s %s, &id[n], &sei[n], &mei[n], sex[n]);
    if(end = EOF)break;
    n++;
  }

  for(int i = 0; i < n; i++){
    printf("学籍番号：%d　名前：%s　%s　性別：%s\n", id[i], sei[i], mei[i], sex[i]);
  }
}

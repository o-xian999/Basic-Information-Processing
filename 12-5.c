#include <stdio.h>
#include <stdlib.h>

int main(void){
  int n = 0, id[10], a[10];
  char sei[10][52], mei[10][52], sex[10][52];
  FILE *fp;
  fp = fopen("meibo.txt", "r");
  
  while(1){
    a[n] = fscanf(fp, "%d %s %s %s", &id[n], sei[n], mei[n], sex[n]);
    //if(end = EOF)break;
    printf("学籍番号：%d　名前：%s　%s　性別：%s\n", id[n], sei[n], mei[n], sex[n]);
    if(a[n] == EOF)break;
    n++;
  }
  fclose(fp);

  //for(int i = 0; i < n; i++){
    //printf("学籍番号：%d　名前：%s　%s　性別：%s\n", id[i], sei[i], mei[i], sex[i]);
  //}
}

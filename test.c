#include <stdio.h>
#include <stdlib.h>

int main(void){
  int n, end, count = 0, a[1000000];
  FILE *fp;
  fp = fopen("data3.txt","r");

  while(fscanf(fp, "%d\t%d\t%d\t%d\t%d", &a[count]) != EOF){
    count++;
  }
  fclose(fp);
  printf("%d個\n", count);

}


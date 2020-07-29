#include <stdio.h>
#include <string.h> //strcpy, strcat, strcmpに必要

int main(void){
   char a[52], b[52], c[52], disp[202];
   printf("姓を入力して下さい＞");
   scanf("%s", a);          //文字列のキーボード入力
   printf("名を入力して下さい＞");
   scanf("%s", b);          //文字列のキーボード入力
   printf("性別を入力してください＞");
   scanf("%s", c);

   //配列変数dispに表示する文字列を連結して格納

   strcpy(disp, "あなたは　");   // disp = "あなたは　";
   strcat(disp, a);   // disp = disp + a;
   strcat(disp, " ");  // disp = disp + " ";
   strcat(disp, b);  // disp = disp + b;
   strcat(disp, "(");
   strcat(disp, c);
   strcat(disp, ")");
   strcat(disp, "　さんですね！\n");  // disp= disp + "　さんですね！\n";

   printf("%s", disp);          //文字列の画面表示

}



/*
有一函式當x< 0 時 y=1，當 x>0 時，y=3，當 x=0 時 y=5，程式設計，從鍵盤輸入一個x值，輸出y值。
*/
#include <stdio.h> 
int main(){
	   int x, y;
	   printf("X=> ");
        scanf("%d", &x);
    if (x < 0){
        printf(" y = 1 \n ");
      } else if (x > 0){
        printf(" y = 3 \n ");
      } else { 
   //if (x == 0){
        printf(" y = 5 \n ");
       }
    
    
}

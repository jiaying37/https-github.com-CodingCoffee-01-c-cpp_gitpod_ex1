/*
輸入年分，輸出閏年判斷
*/
#include <stdio.h> 
int main(){
	   int x;
	   printf("X=> ");
        scanf("%d", &x);
       
    if ((x % 4) == 0){
        printf(" 閏年 \n ");
      }else if((x % 4) != 0){
          printf("不是閏年 \n");
      }
    
    
}

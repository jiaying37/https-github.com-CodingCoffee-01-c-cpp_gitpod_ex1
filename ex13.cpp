/*
鍵盤輸入，輸入 2 個數，再輸入 兩數之和，如果正確，顯示“right”，否則顯示“error”
*/
#include <stdio.h> 
int main(){
	   int a, b, c;
     printf("A=> ");
       scanf("%d", &a);
     printf("B=> ");
       scanf("%d", &b);
     printf("C=> a + b");
       scanf("%d",&c);
    if ((a + b)== c ){
        printf(" right \n ");
    }else{
        printf(" error  \n");
    }
       
    
}

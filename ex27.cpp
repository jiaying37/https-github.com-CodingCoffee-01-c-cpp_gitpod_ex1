#include<stdio.h>
int main()
{
 int x , i , y =0;
 scanf("%d",&x);
 for(i=0;i<10;i++){
    
  scanf("%d",&x);
  y+=x;
 }
 printf("平均值=%d",y/10);
 return 0;
}

#include <stdio.h> 
int main(){
	int a;
	printf(" please input  a number \n");
        scanf("%d",&a);
        if(a >=60 ){
              printf(" pass \n");
         } else{
            printf(" fail \n");
         }
         if(a >= 85 ){
              printf(" A \n");
         } else if( a <85 && a >=75 ){
            printf(" B \n");
         } else if(a >= 65 && a <= 70){
            printf( " C \n ");
         } else if ( a < 60 && a >= 50 )
             printf(" D  \n");
         else 
            printf(" E \n");

}
          
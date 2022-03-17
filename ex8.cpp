#include<stdio.h>

int main(void){
	int x,y; 
	int bool_value;
	
	x = 3 ; y= 4; 
/*
&&    Logical  and     x < 5 &&  x < 10
||    Logical  or      x < 5 || x < 4
!     Logical  not   !(x < 5 && x < 10)
*/
	
	bool_value = ( x > y );
	printf(" x > y ==> %d \n ",bool_value);
	bool_value = ( x < y );
	printf(" x < y ==> %d \n ",bool_value);	
	bool_value = (x < 5 && x < 10);	
	printf(" x < 5 &&  x < 10 ==> %d \n ",bool_value);	

	bool_value = ( x < y );
	printf(" x < y ==> %d \n ",bool_value);
	bool_value = ( x < y );
	printf(" x < y ==> %d \n ",bool_value);	
	bool_value = (x < 5 || x < 4);	
	printf(" x < 5 || x < 4 ==> %d \n ",bool_value);	

	bool_value = ( x < y );
	printf(" x < y ==> %d \n ",bool_value);
	bool_value = ( x > y );
	printf(" x > y ==> %d \n ",bool_value);	
	bool_value = !(x < 5 && x < 4);	
	printf(" x < 5 && x < 4 ==> %d \n ",bool_value);


}


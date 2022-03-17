#include<stdio.h>

int main(void){
	int x,y; 
	int bool_value;
	
	x = 3 ; y= 4; 
/*
==     Equal to       x == y
!=     Not equal      x != y
>      Greater than   x > y
<      Less than      x < y
>=     Greater than or equal to  x >= y
<=     Less than or equal to     x <= y
*/
	bool_value = ( x > y );
	printf(" x > y ==> %d \n ",bool_value);
	bool_value = ( x < y );
	printf(" x < y ==> %d \n ",bool_value);

	bool_value = ( x == y );
	printf(" x == y ==> %d \n ",bool_value);
	bool_value = ( x == y );
	printf(" x == y ==> %d \n ",bool_value);	

	bool_value = ( x != y );
	printf(" x != y ==> %d \n ",bool_value);
	bool_value = ( x != y );
	printf(" x != y ==> %d \n ",bool_value);	

    bool_value = ( x > y  );
	printf(" x > y ==> %d \n ",bool_value);
	bool_value = ( x > y );
	printf(" x > y ==> %d \n ",bool_value);	

    bool_value = ( x < y  );
	printf(" x < y ==> %d \n ",bool_value);
	bool_value = ( x < y );
	printf(" x < y ==> %d \n ",bool_value);	

	bool_value = ( x >= y  );
	printf(" x >= y ==> %d \n ",bool_value);
	bool_value = ( x >= y );
	printf(" x >= y ==> %d \n ",bool_value);	


	bool_value = ( x <= y  );
	printf(" x <= y ==> %d \n ",bool_value);
	bool_value = ( x <= y );
	printf(" x <= y ==> %d \n ",bool_value);	


}

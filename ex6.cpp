#include <stdio.h>

int main() {
    int a, b, product;
    a = 20;
    b = 7;

/*
x + y
x - y
x * y
x / y
x % y
++x
x++
--x
x--

x = 16 
x >> 1
x >> 2
x << 1
*/

 
    // Calculating product
    product = a + b;

 
    printf("a + b = %d \n", product);
    
   

    // Calculating product
     product = a - b;

 
    printf("a - b = %d \n", product);
    
    
    // Calculating product
     product = a * b;

 
    printf("a * b = %d \n", product);

    
    // Calculating product
     product = a / b;

 
    printf("a / b = %d \n", product);

    // Calculating product
     product = a % b;

 
    printf("a mod b = %d \n", product);

    printf("a = %d \n", a);
  // Calculating product
     product = ++a ;

 
    printf("++a = %d \n", product);

      // Calculating product
     product = a++ ;

 
    printf("a++ = %d \n", product);

    // Calculating product
     product = --a ;
      --a ;

    printf("--a = %d \n", a);
    printf("--a = %d \n", product);
    

    // Calculating product
     product = a-- ;

 
    printf("a-- = %d \n", product);

    
    // Calculating product
      a  =  16 ;  // 0001  0000

 
    printf("a = %d \n", a );
/*
    x >> 1     8
    x >> 2     2
    x << 1     32
*/


     a = a >> 1 ;  // 0000 1000

 
    printf("a = %d \n", a );

    a >> 2 ;  // 0000 0100

 
    printf("a = %d \n", a >> 2);

    
    a << 2 ;  //0010 0000

 
    printf("a = %d \n", a << 2 );


    return 0;
}
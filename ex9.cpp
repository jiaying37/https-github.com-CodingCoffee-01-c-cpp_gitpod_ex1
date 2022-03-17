#include <stdio.h>

int main() {
    int a, product;
    a = 5 ;

    
      // Calculating product
    a += 3 ;

 
    printf("a += 3 = %d\n", a);
    
         // Calculating product
    a -= 3 ;

 
    printf("a -= 3 = %d\n", a);
    
    
         // Calculating product
    a *= 3 ;

    printf("a *= 3 = %d\n", a);
    
         // Calculating product
    a /= 3 ;

 
    printf("a /= 3 = %d\n", a);
    
         // Calculating product
    a %= 3 ;

 
    printf("a mod= 3 = %d\n", a);
    
        // Calculating product
    a &= 3 ;

 
    printf("a &= 3 = %d\n", a);
    
         // Calculating product
         
    
    
    /*
    
       a =  4
       
           100 
           011
        -------    
            111
    
    */
    a = 4;
    
    printf("a  = %d\n", a);
    
    a &= 3 ;

 
    printf("(a |= 3) = %d\n", a);
    
          // Calculating product
    a ^= 3 ;

 
    printf("a ^= 3 = %d\n", a);
         
          // Calculating product
    a >>= 3 ;

 
    printf("a >>= 3 = %d\n", a);
    
       // Calculating product
    a <<= 3 ;

 
    printf("a <<= 3 = %d\n", a);
    
    
    
    return 0;
}
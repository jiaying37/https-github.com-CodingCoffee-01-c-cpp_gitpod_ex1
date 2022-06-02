#include <stdio.h> 
int main ( ) {
    int count = 0 , n , t , sum = 0 ; 
    printf ( " Number : " ) ; 
    scanf ( " %d " , & n ) ; 
    while ( n != 0 ) { 
    t = n % 10 ; 
    n = n / 10 ; 
    count ++ ;
    sum += t ; 
        
    } 
    printf ( "count = %d , sum = %d " , count , sum);    
    return 0 ;
    
    
}

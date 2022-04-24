#include <iostream>
#include <stdio.h>
using namespace std;
int main (){
    int p_c=0,n_c=0,z_c=0;
    int i,a[10]={0,-1,2,5,5,3,9,0,-8,6};
    
    /*for (i = 0; i < 10;++i){
        scanf ("%d" , &a[i]);
    }*/
    for (i=0; i < 10; ++i){
        
        printf ("a[%d] = %d \n" , i ,a[i]);
        if(a[i] > 0 ){ 
            p_c++;
        }else if (a[i] < 0 ) {
            n_c++;
        }else {
            if(a[i] = 0) {
                z_c++;
            }
        }
    
    }
    printf(" the namber > 0 : %d" ,p_c);
}    

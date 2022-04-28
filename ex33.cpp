
#include <iostream>
#include <stdio.h>
using namespace std;
int main (){
     int i,sum=0;
    for(i=1; i<1000 ;i+=2){
        sum =sum+i;
        //printf(" sum = %d",sum);
     } 
         cout <<"1-1000之間的奇數和為"<< sum << endl;
         
         return 0;
}

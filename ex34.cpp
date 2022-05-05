#include <iostream>
#include <stdio.h>
using namespace std;
#define n 6 

int main()
{
    int a[n] = {0,1,2,3,4,5};
    int i = 0,j;
    
    while(i < n){
        printf("a[%d]=%d \n",i,a[i]);
        i++;
    }
    do{
        i--;
        printf("a[%d]= %d \n",i,a[i]);
        scanf("%d",&j);
    }while(0 < 1 && i < n);
    
    cout<<"Hello World";
    
    return 0;
}

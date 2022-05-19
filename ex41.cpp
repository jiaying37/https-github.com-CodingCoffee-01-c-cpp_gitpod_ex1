#include <iostream>

using namespace std;

void print_array(int* a){
    int i;
    
    for( i = 0;i <  6;i++);{
        printf("a[%d] =%d ",i,a[i]);
    }
}
void swap(int* a,int* b){
    int temp;
    temp = * a; 
    * a = * b;   
    * b = temp; 
}

int main()
{
    int b,a[6]={3,5,8,67,54,21};
    int* p;
    
    printf("please input a num:");
    scanf("%d",&b);
    p = &b;
    
    printf("*p = %d\n",*p);
    printf("p = %x\n",p);
    printf("&b = %x\n",&b);
    
    p = a;
    for(int i =0;i < 6;i++){
        printf("%x ",p+i);
    }
    printf("\n");
     print_array(a);
    
    return 0;
}

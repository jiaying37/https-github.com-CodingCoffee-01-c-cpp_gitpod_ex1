#include <stdio.h>

int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int mul(int a,int b){
    return a*b;
}
int divi(int a,int b){
    return a/b;
}

int main()
{
    int  (* fun_ptr)(int,int);
    int i;
    char c;
    printf("input num \n");
    scanf("%d",&i);
    switch(i){
        case 1:
        fun_ptr = add;
        printf("fun = %d \n " ,fun_ptr(10,20));
        break;
        case 2:
        fun_ptr = sub;
        printf("fun  = %d \n " ,fun_ptr(10,20));
        break;
        case 3:
        fun_ptr = mul;
        printf("fun  = %d \n " ,fun_ptr(10,20));
        break;
        case 4:
        fun_ptr = divi;
        printf("fun  = %d \n " ,fun_ptr(10,20));
        break;
        default:
        break;
    }
    
}

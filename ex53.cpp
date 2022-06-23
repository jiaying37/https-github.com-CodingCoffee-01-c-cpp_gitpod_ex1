#include <stdio.h>
// A normal function with an int parameter
// and void return type
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
    int (* fun_ptr)(int,int) = add;
    
    printf("fun = %d \n " ,fun_ptr(10,20));
    
    fun_ptr = sub;
    
    printf("fun  = %d \n " ,fun_ptr(10,20));
    
    fun_ptr = mul;
    
    printf("fun  = %d \n " ,fun_ptr(10,20));
    
    fun_ptr = divi;
    
    printf("fun  = %d \n " ,fun_ptr(10,20));
    
    return 0;
}

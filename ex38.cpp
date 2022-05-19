#include <iostream>

using namespace std;

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
        printf("%d ",*(p+i));
    }
    printf("\n");
     for(int i =0;i < 6;i++){
        printf("%d ",*(p+i));
    }

    return 0;
}

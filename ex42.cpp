#include<stdio.h>
float num[50];
int main()
{
    float *p,max,min,average,sum=0;

for(p = num ;p < num+10;p++) scanf("%f",p);

    max=min=num[0];
    
    for(p=num;p<num+10;p++)
    {
        
        if(*p>max) max=*p;
        
        if(*p<min) min=*p;
        
        sum+=*p;
    
        
    }
    printf("max = %f\nmin = %f\naverage = %f\n ",max , min , average=sum/10.0);
    
    return 0;
}

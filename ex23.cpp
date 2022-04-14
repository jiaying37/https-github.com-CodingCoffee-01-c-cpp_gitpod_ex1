#include <iostream>

using namespace std;

int main()
{
    
    int a[9] = {1,2,3,5,6,9,8,7,4};
    int ii;
    //int a = 5 , b =8 , c = 1;
    cin >> a[0] ; // a 
    cin >> a[1] ; // b 
    cin >> a[2] ; // c 
    if (a[0] < a[1]){
        if(a[0] > a[2] ){
            int temp = a[0];
            a[0] = a[1];
            a[1] = temp;
            printf(" b > a > c \n");
            //printf(" %d > %d > %d \n",a[1],a[0],a[2]);
             printf(" %d > %d > %d \n ",a[0],a[1],a[2]);
             /*
            temp = a[2];
            a[2] = a[1];
            a[1] = temp;
            printf(" %d > %d > %d \n ",a[0],a[1],a[2]);
            */
        }else{
            if( a[2] > a[1]){
                int temp = a[2];
                a[2] = a[1];
                a[1] = temp;
                printf(" c > b > a  \n"); 
                printf(" %d > %d > %d \n ",a[2],a[1],a[0]);
                temp = a[2];
                a[2] = a[1];
                a[1] = temp;
                printf(" %d > %d > %d  ",a[2],a[1],a[0]);
            }else{
                int temp = a[2];
                a[2] = a[1];
                a[1] = temp;
                printf( " b > c > a \n");
                printf(" %d > %d > %d \n ",a[1],a[2],a[0]);
                temp = a[2];
                a[2] = a[1];
                a[1] = temp;
                printf(" %d > %d > %d  ",a[1],a[2],a[0]);
            }
        }
        } else /*if(a>b)*/{
            if ( a[1] > a[2] ){
               int temp = a[1];
               a[1] = a[2];
               a[2] = temp;
               printf(" a > b > c \n");
               printf(" %d > %d > %d \n ",a[0],a[1],a[2]);
               temp = a[1];
               a[1] = a[2];
               a[2] = temp;
               printf(" %d > %d > %d  ",a[0],a[1],a[2]); 
        }else{ 
            // b > a , c > a 
           if(a[0] > a[2] ){
             int temp = a[0];
             a[0] = a[2];
             a[2] = temp;
                 printf( " a > c > b \n");
                 printf(" %d > %d > %d \n ",a[0],a[2],a[1]);
             temp = a[2];
             a[2] = a[0];
             a[0] = temp;
             printf(" %d > %d > %d  ",a[0],a[2],a[1]);
                     
            }else{
             int temp = a[0];
             a[0] = a[2];
             a[2] = temp;
                printf(" c > a > b \n");
                printf(" %d > %d > %d \n ",a[2],a[0],a[1]);
             temp = a[2];
             a[2] = a[0];
             a[0] = temp;
             printf(" %d > %d > %d  ",a[2],a[0],a[1]);
                
                
            }
        }
    }   
    
    cout<< endl << "Hello World";

    return 0;
}

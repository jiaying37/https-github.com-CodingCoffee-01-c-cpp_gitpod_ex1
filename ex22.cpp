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
            printf(" b > a > c ");
        }else{
            if( a[2] > a[1]){
               printf(" c > b > a  "); 
            }else{
                printf( " b > c > a");
            }
        }
    } else /*if(a>b)*/{
        if ( a[1] > a[2] ){
            printf(" a > b > c ");
        }else{ 
            // b > a , c > a 
           if(a[0] > a[2] ){
                 printf( " a > c > b");
            }else{
                printf(" c > a > b");
                
            }
        }
    }   
    
    cout<< endl << "Hello World";

    return 0;
}

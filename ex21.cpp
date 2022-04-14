#include <iostream>

using namespace std;

int main()
{
    
    int i[9] = {1,2,3,5,6,9,8,7,4};
    int ii;
    int a = 5 , b =8 , c = 1;
    cin >> a ;
    cin >> b ;
    cin >> c ;
    if (a < b){
        if(a > c ){
            printf(" b > a > c ");
        }else{
            if( c > b){
               printf(" c > b > a  "); 
            }else{
                printf( " b > c > a");
            }
        }
    } else /*if(a>b)*/{
        if ( b > c ){
            printf(" a > b > c ");
        }else{ 
            // b > a , c > a 
           if(a > c ){
                 printf( " a > c > b");
            }else{
                printf(" c > a > b");
                
            }
        }
    }   
    
    cout<< endl << "Hello World";

    return 0;
}
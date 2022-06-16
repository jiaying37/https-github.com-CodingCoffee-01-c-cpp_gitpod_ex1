#include <iostream>
using namespace std;
struct Distance{
    int m;
    float cm;
};
/*
typedef struct Distance{
    int feet;
    float inch;
} distances;
*/
int main() {
    struct Distance d1, d2;
    //distances d1, d2;
   
    d1.m = 2 ;
    d1.cm = 12 ;
   
    printf(" this distance =  %d m  %f cm \n",d1.m,d1.cm);
    
    d2.m = 29 ;
    d2.cm = 39 ;
    printf(" this distance = %d m %f cm \n ",d2.m,d2.cm);
}

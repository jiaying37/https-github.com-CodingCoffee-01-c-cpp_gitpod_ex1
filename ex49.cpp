#include <iostream>
using namespace std;


typedef struct distance{
    int feet;
    float inch;
    }distances;
    
    distances add(distances d1,distances d2){
        distances d =d1;
        
        return d;
    }
    int main() {
    distances d1, d2;
   
    d1.feet  = 2 ;
    d1.inch = 12 ;
   
    printf(" this distance =  %d feet  %f inch \n",d1.feet,d1.inch);
   
    }

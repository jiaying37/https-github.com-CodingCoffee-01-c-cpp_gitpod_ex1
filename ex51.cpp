#include <iostream>
using namespace std;

typedef struct Time{
    int day;
    int hr;
    int min;
    int sec;
    int ms;
} ttime;

ttime convert(ttime t1){
   
   
    return t1;  
}
int main() {
    ttime t1;
    int temp;
   
    t1.ms  = 3654321;

    temp = t1.ms % 1000 ;

    t1.sec = t1.sec + t1.ms /1000 ;

    t1.ms = temp  ; 


    t1.sec  = 3654;

    temp = t1.sec % 60 ;

    t1.min = t1.min + t1.sec /60 ;

    t1.sec = temp;


    t1.min = 60.9;

    temp = t1.min % 60;

    t1.hr= t1.hr + t1.min /60;
   
    t1.min = temp;

    
    
    t1.hr = 1;

    temp = t1.hr % 24;

    t1.day= t1.day + t1.hr /24;

    t1.hr = temp;
 

   
    printf(" correct time expression  =  %d hr %d min %d sec  %d ms \n",t1.hr,t1.min,t1.sec,t1.ms);
}

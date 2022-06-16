#include <iostream>
using namespace std;

typedef struct Time{
    int hr;
    int min;
    int sec;
    int ms;
} ttime;

ttime convert(ttime t1){
   
   
    return t1;  
}
int main() {
    ttime t1, t2;
   
    t1.ms  = 20000 ;
    t1.sec = 600;
   
    printf(" correct time expression  =  %d hr %d min %d sec  %d ms \n",t1.hr,t1.min,t1.sec,t1.ms);
}

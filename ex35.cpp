#include<iostream>
using namespace std;
  
  int main()
  {
    int i,j;
      j=1;
       do{
          i=1;
          do{
              cout<<j<<"*"<<i<<"="<<i*j<<" ";
              i++;
              
          }while(i<=9);
          
          cout<<endl;
          j++;
          
      }while(j<=9);
      
      return 0;
      
  }

#include <iostream>

using namespace std;

int main()
{
    int i,j;
    for(j=1;j <= 9;j++){
        for(i=1;i <= 9;i++){
        printf(" %2d * %2d = %2d ",j,i,j*i);
        }
       
        cout << endl ;
        
    }
        
        
    return 0;
}
